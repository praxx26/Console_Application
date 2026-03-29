#include<iostream>
#include "./user/User.h"
#include "./theater/Theater.h"
#include "./movie/Movie.h"
#include "./show/Show.h"
#include "./screen/Screen.h"
#include "./seat/Seat.h"


using namespace std;

int main(){
    User user(1,"Praga","praga@gmail.com","praga");

    cout<<"Enter 1 for booking via movie \n2 for booking via theater\n";
    int choice;
    cin>>choice;

    int userId=user.getUserId();
    Theater theater(userId);
    Movie movie(userId);

    try{

        if(choice==1){
            user.bookViaMovie();

            movie.showAllMovies();
            cout<<"\nEnter number to select the Movie\n";
            int cm;
            cin>>cm;
            movie.selectMovie(cm);
            cout<<"Selected Movie Name : "<<movie.getMovieName()<<endl;

            theater.showAllTheaters();
            cout<<"\nEnter number to select the Theater\n";
            int ct;
            cin>>ct;
            theater.selectTheater(ct);
            cout<<"Selected Theater Name : "<<theater.getTheaterName()<<endl;
        }
        else if(choice==2){
            user.bookViaTheater();

            theater.showAllTheaters();
            cout<<"\nEnter number to select the Theater\n";
            int ct;
            cin>>ct;
            theater.selectTheater(ct);
            cout<<"Selected Theater Name : "<<theater.getTheaterName()<<endl;

            movie.showAllMovies();
            cout<<"\nEnter number to select the Movie\n";
            int cm;
            cin>>cm;
            movie.selectMovie(cm);
            cout<<"Selected Movie Name : "<<movie.getMovieName()<<endl;
        }
        else{
            throw runtime_error("Invalid choice");
        }

        Show show(theater.getTheaterId(),movie.getMovieId());

        show.showAvailableShows();
        cout<<"Enter number to select show\n";
        int cs;
        cin>>cs;
        show.confirmShow(cs);
        show.message();

        Screen screen(show.getShowId(),movie.getMovieId(),theater.getTheaterId());

        screen.showAllScreen();
        cout<<"Enter number to select screen\n";
        int sn;
        cin>>sn;
        screen.selectScreen(sn);
        screen.message();

        Seat seat(theater.getTheaterId(),show.getShowId(),screen.getScreenId());
        seat.showSeatLayout();
        seat.noOfSeats();
        seat.selectSeat();
        seat.returnSelectedSeats();

    }
    catch(const runtime_error& e){
        cerr<<e.what()<<endl;
        return 1;
    }

    return 0;
}

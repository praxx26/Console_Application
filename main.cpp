#include<iostream>
#include "./user/User.h"
#include "./theater/Theater.h"
#include "./movie/Movie.h"
#include "./show/Show.h"


using namespace std;
int main(){
    User user(1,"Praga","praga@gmail.com","praga");
    cout<<"Enter 1 for booking via movie \n2 for booking via theater\n";
    int choice;
    cin>>choice;
    int userId=user.getUserId();
    Theater theater(userId);
    Movie movie(userId);


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
        
        Show show(theater.getTheaterId(),movie.getMovieId());

        show.showAvailableShows();
        cout<<"Enter number to select show\n";
        int cs;
        cin>>cs;
        show.confirmShow(cs);
        show.message();
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

        Show show(theater.getTheaterId(),movie.getMovieId());

        show.showAvailableShows();
        cout<<"Enter number to select show\n";
        int cs;
        cin>>cs;
        show.confirmShow(cs);
        show.message();
    }


}
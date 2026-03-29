#include<iostream>
#include "./user/User.h"
#include "./theater/Theater.h"
#include "./movie/Movie.h"
#include "./show/Show.h"
#include "./screen/Screen.h"
#include "./seat/Seat.h"
#include "./ticket/Ticket.h"


using namespace std;

int main(){
    User user(1,"Praga","praga@gmail.com","praga");

    while(true){
        
        int choice;
    
        while(true){
            cout<<"Enter 1 for booking via movie \n2 for booking via theater\n";
            cin>>choice;
            if(choice == 1 || choice == 2)break;
            else cout << "Invalid choice! Please try again.\n\n";
    
        }
    
    
        int userId=user.getUserId();
        Theater theater(userId);
        Movie movie(userId);
    
        if(choice==1){
            user.bookViaMovie();
    
            movie.showAllMovies();
                cout<<"\nEnter number to select the Movie\n";
                int cm;
                while(true){
                    cin>>cm;
                    if(movie.selectMovie(cm)) break;
                    else{
                        cout<<"\nInvalid - Selection! Please Try again\n";
                    }
                    
                }
                cout<<"Selected Movie Name : "<<movie.getMovieName()<<endl;
                theater.showAllTheaters();
                cout<<"\nEnter number to select the Theater\n";
                int ct;
                 while(true){
                    cin>>ct;
                    if(theater.selectTheater(ct))break;
                    else{
                        cout<<"\nInvlaid theater selection ! Please try again\n";
                    }
                }
                cout<<"Selected Theater Name : "<<theater.getTheaterName()<<endl;
            }
            else if(choice==2){
                user.bookViaTheater();
    
                theater.showAllTheaters();
                cout<<"\nEnter number to select the Theater\n";
                int ct;
                while(true){
                    cin>>ct;
                    if(theater.selectTheater(ct))break;
                    else{
                        cout<<"\nInvlaid theater selection ! Please try again\n";
                    }
                }
                cout<<"Selected Theater Name : "<<theater.getTheaterName()<<endl;
    
                movie.showAllMovies();
                cout<<"\nEnter number to select the Movie\n";
                int cm;
                while(true){
                    cin>>cm;
                    if(movie.selectMovie(cm)) break;
                    else{
                        cout<<"\nInvalid - Selection! Please Try again\n";
                    }
                    
                }
                cout<<"Selected Movie Name : "<<movie.getMovieName()<<endl;
            }
            Show show(theater.getTheaterId(),movie.getMovieId());
    
            show.showAvailableShows();
            cout<<"Enter number to select show\n";
            int cs;
    
            while(true){
                cin>>cs;
                if(show.confirmShow(cs))break;
                else{
                    cout<<"\nInvalid shoe selection! please tyr again\n";
                }
            }
            show.message();
    
            Screen screen(show.getShowId(),movie.getMovieId(),theater.getTheaterId());
    
            screen.showAllScreen();
            cout<<"Enter number to select screen\n";
            int sn;
            while(true){
                cin>>sn;
                if(screen.selectScreen(sn))break;
                else cout<<"\nInvalid screen selection ! please try again\n";
    
            }
            screen.message();
    
            Seat seat(theater.getTheaterId(),show.getShowId(),screen.getScreenId());
            seat.showSeatLayout();
            seat.noOfSeats();
            seat.selectSeat();
            while(true){
                seat.returnSelectedSeats();
                if(seat.showPayment()){
                    break;
                }
                else{
                    cout<<"\nReselect Your seats \n";
                }
    
            }
            Ticket ticket(theater.getTheaterName(),show.getst(),show.geted(),screen.getScreenNumber(),seat.returnss());
            ticket.showTicket();

            cout<<"\nBooking Successfull!!";

            char again;
            cout<<"\nIf you want to book another (y/n)";
            cin>>again;
            if(again=='n'||again=='N'){
                cout<<"\nThank you Enjoy your movie\n";
                break;
            }

    }

    return 0;
}

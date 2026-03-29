#include "./Seat.h"

Seat::Seat(int theaterId,int showId,int screenId){
    this->theaterId=theaterId;
    this->showId=showId;
    this->screenId=screenId;
    seats.resize(5,vector<char>(10,'A'));
}

void Seat::showSeatLayout(){
    cout<<"Seat Layout\n";
    cout<<"A - Available\n";
    cout<<"B - Booked\n";
    for(int i=0;i<seats.size();i++){
        cout<<"Row "<<i<<" : ";
        for(int j=0;j<seats[0].size();j++){
            cout<<seats[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Seat::noOfSeats(){
    cout<<"\nNumber of seats to book : ";
    int n;
    cin>>n;
    totalSeats=n;
}

void Seat::selectSeat(){
    int count=0;
   while(count<totalSeats){
        int row,seatNo;
        Seat::showSeatLayout();

        cout<<"\nEnter Row : ";
        cin>>row;
        cout<<"\nSeat No : ";
        cin>>seatNo;
        if(row <0 || row>=seats.size() ||seatNo<0 || seatNo>=seats[0].size()){
            cout<<"Invalid Seat Please click the correct Seat";
            continue;
        }
        else if(seats[row][seatNo]=='B'){
            cout<<"Seat is already booked";
            continue;
        }
        else {
            seats[row][seatNo]='B';
            
        }

        count++;

    }

    cout<<"Seat Selected\n";
    cout<<"Seat booked ! Remaining: "<<(totalSeats - count)<<"\n";

}

void Seat::returnSelectedSeats(){
    for(int i=0;i<seats.size();i++){
        for(int j=0;j<seats[0].size();j++){
            if(seats[i][j]=='B'){
                cout<<"Row - "<<i<<" ,Seat No"<<j<<endl;
            }
        }
    }
}
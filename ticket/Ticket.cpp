#include "./Ticket.h"

Ticket::Ticket(string theaterName,float showStartTime,float showEndTime,int screeNo,vector<pair<int,int>>seats){
    this->screeNo=screeNo;
    this->seats=seats;
    this->showEndTime=showEndTime;
    this->showStartTime=showStartTime;
    this->theaterName=theaterName;
}

void Ticket::showTicket(){
    cout<<string(35,'=');
    cout<<"\n=======Ticket=======";
    cout<<"\nTheater Name : "<<theaterName<<"\n";
    cout<<"screeNo : "<<screeNo<<"\n";
    cout<<"Show timings : "<<showStartTime<<" - "<<showEndTime<<"\n";
    for(auto [row,seatNo]:seats){
        cout<<"Row "<<row<<" SeatNo "<<seatNo<<endl;
    }   
}
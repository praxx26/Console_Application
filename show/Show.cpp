#include "./show.h"

Show::Show(int theaterId,int movieId){
    this->theaterId=theaterId;
    this->movieId=movieId;
}

void Show::showAvailableShows(){
    cout<<"show1: 10.00 - 1.00\n";
    cout<<"show2: 2.00 - 5.00\n";
    cout<<"show3: 6.00 - 9.00\n";
}

void Show::confirmShow(int choice){
    if(choice==1){
        this->showId=1;
        this->startTime=10.00;
        this->endTime=1.00;
    }
    else if(choice==2){
        this->showId=2;
        this->startTime=2.00;
        this->endTime=5.00;
    }
    else if(choice==3){
        this->showId=3;
        this->startTime=6.00;
        this->endTime=9.00;
    }
    else{
        throw runtime_error("Invalid selection");
    }
}

int Show::getShowId(){
    return showId;
}

void Show::message(){
    cout<<"Show - Timing : "<<startTime<<" to "<<endTime<<"\n";
}
#include "./Theater.h"

Theater::Theater(int userId){
    this->userId=userId;
}

void Theater::showAllTheaters(){
    cout<<"1 - PVR\n";
    cout<<"2 - Inox\n";
    cout<<"3 - Imax\n";
    cout<<"4 - KG\n";
}

void Theater::selectTheater(int choice){
    if(choice==1){
        this->theaterId=101;
        this->theaterName="PVR";
        this->theaterLocation="Coimbatore";
    }
    else if(choice==2){
        this->theaterId=102;
        this->theaterName="Inox";
        this->theaterLocation="Coimbatore";
    }
    else if(choice==3){
        this->theaterId=103;
        this->theaterName="Imax";
        this->theaterLocation="Coimbatore";
    }
    else if(choice==4){
        this->theaterId=104;
        this->theaterName="KG";
        this->theaterLocation="Coimbatore";
    }
}

int Theater::getTheaterId(){
    return theaterId;
}

string Theater::getTheaterName(){
    return theaterName;
}
#include "./Screen.h"
#include<iostream>
using namespace std;

Screen::Screen(int showId,int movieId,int theaterId){
    this->showId=showId;
    this->movieId=movieId;
    this->theaterId=theaterId;
}

void Screen::showAllScreen(){
    if(theaterId==101){
        cout<<"Screen-1\n";
        cout<<"Screen-2\n";
        cout<<"Screen-3\n";
        cout<<"Screen-4\n";
    }
    else if(theaterId==102){
        cout<<"Screen-1\n";
        cout<<"Screen-2\n";
    }
    else if(theaterId==103){
        cout<<"Screen-1\n";
        cout<<"Screen-2\n";
        cout<<"Screen-3\n";
    }
    else{
        cout<<"Screen-1\n";
    }
}

void Screen::selectScreen(int c){
    if(theaterId==101){
        switch(c){
            case 1:
                this->screenId=1;
                this->screenNumber=1;
                break;
            case 2:
                this->screenId=2;
                this->screenNumber=2;
                break;
            case 3:
                this->screenId=3;
                this->screenNumber=3;
                break;
            case 4:
                this->screenId=4;
                this->screenNumber=4;
                break;
            default:
                throw runtime_error("Invalid selection");
        }
    }
    else if(theaterId==102){
        switch(c){
            case 1:
                this->screenId=1;
                this->screenNumber=1;
                break;
            case 2:
                this->screenId=2;
                this->screenNumber=2;
                break;
            default:
                throw runtime_error("Invalid selection");
        }
    }
    else if(theaterId==103){
        switch(c){
            case 1:
                this->screenId=1;
                this->screenNumber=1;
                break;
            case 2:
                this->screenId=2;
                this->screenNumber=2;
                break;
            case 3:
                this->screenId=3;
                this->screenNumber=3;
                break;
            default:
                throw runtime_error("Invalid selection");
        }
    }
    else{
        if(c==1){
            this->screenId=1;
            this->screenNumber=1;
        }
        else{
            throw runtime_error("Invalid selection");
        }
    }
}

int Screen::getScreenId(){
    return screenId;
}

int Screen::getScreenNumber(){
    return screenNumber;
}

void Screen::message(){
    cout<<"Selected Screen : "<<screenNumber;
}
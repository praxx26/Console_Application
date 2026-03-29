#include "./Movie.h"

Movie::Movie(int userId){
    this->userId=userId;
}

void Movie::showAllMovies(){
    cout<<"1-Leo\n";
    cout<<"2-Vikram\n";
    cout<<"3-Leo_2\n";
}

void Movie::selectMovie(int choice){
    if(choice==1){
        this->movieName="Leo";
        this->movieId=11;
        this->duration=168.90;
        this->language="Tamil";
    }
    else if(choice==2){
        this->movieName="Vikram";
        this->movieId=12;
        this->duration=167.90;
        this->language="Tamil";
    }
    else if(choice==3){
        this->movieName="Leo-2";
        this->movieId=13;
        this->duration=169.90;
        this->language="Tamil";
    }
    else{
        throw runtime_error("Ivalid Selection");   
    }
}
int Movie::getMovieId(){
    return movieId;
}

string Movie::getMovieName(){
    return movieName;
}
#include "User.h"


User::User(int id,string username,string email,string password){
    this->userid=id;
    this->username=username;
    this->password=password;
    this->email=email;
}

void User::bookViaMovie(){
    cout<<username<<" is booking via movie\n";
}

void User::bookViaTheater(){
    cout<<username<<" is booking via Theater\n";
}

int User::getUserId(){
    return userid;
}
string User::getUserName(){
    return username;
}

#include<iostream>
#include <string>
using namespace std;
class User{
    private:
    int userid;
    string username;
    string email;
    string password;
    
    
    public:
    User(int id,string username,string email,string password);
    void bookViaMovie();
    void bookViaTheater();
    int getUserId();
    string getUserName();
};
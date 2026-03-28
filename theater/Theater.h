#include<iostream>
using namespace std;
class Theater{
    private:
    int theaterId;
    string theaterName;
    string theaterLocation; 
    int userId;

    public:
    Theater(int userId);
    void showAllTheaters();
    void selectTheater(int choice);
    int getTheaterId();
    string getTheaterName();
};
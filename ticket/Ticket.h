#include <iostream>
#include <vector>


using namespace std;

class Ticket{
    private:
    int ticketId;
    string theaterName;
    float showStartTime;
    float showEndTime;
    int screeNo;
    vector<pair<int,int>>seats;


    public:
    Ticket(string theaterName,float showStartTime,float showEndTime,int screeNo,vector<pair<int,int>>seats);
    void showTicket();

};
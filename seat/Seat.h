#pragma once
#include <iostream>
#include<vector>
using namespace std;

class Seat{
    private:
    int seatId;
    string seatType;
    int showId;
    int theaterId;
    int screenId;
    int totalSeats;
    vector<vector<char>>seats;
    
    public:
    Seat(int theaterId,int showId,int screenId);
    void showSeatLayout();
    void selectSeat();
    void returnSelectedSeats();
    void noOfSeats();
};
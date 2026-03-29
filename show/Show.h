#include <iostream>
using namespace std;

class Show{
    private:
    int showId;
    float startTime;
    float endTime;
    int theaterId;
    int movieId;



    public:
    Show(int theaterId,int movieId);
    void showAvailableShows();
    bool confirmShow(int choice);
    int getShowId();
    void message();
    float getst();
    float geted();

};
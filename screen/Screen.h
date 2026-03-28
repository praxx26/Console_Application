#include <iostream>
using namespace std;

class Screen{
    private:
    int screenId;
    int screenNumber;
    int showId;
    int movieId;
    int theaterId;

    public:
    Screen(int ShowId,int MovieId,int theaterId);
    void showAllScreen();
    void selectScreen(int c);
    void message();
    int getScreenId();
    int getScreenNumber();
};
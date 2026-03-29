#include<iostream>
using namespace std;

class Movie{
    private:
    int movieId;
    string movieName;
    float duration;
    string language;
    int userId;

    public:
    Movie(int userId);
    void showAllMovies();
    bool selectMovie(int choice);
    int getMovieId();
    string getMovieName();
};
#include "Person.h"
#include <string>
#include <iostream>
#include <random>
using namespace std;

// create three string arrays with genres for music, movies and games
const std::string Person::music_genre[5]{"jazz", "rock", "hiphop", "kpop", "classical"};
const std::string Person::movie_genre[4]{"drama", "action", "comedy", "romance"};
const std::string Person::game_genre[4]{"adventure", "role-play", "rhythm", "action"};

std::string Person::select_music() {
    int music = rand() % 5;
    return music_genre[music];
    }

std::string Person::select_movie() {
    int movie = rand() % 4;
    return movie_genre[movie];
    }

std::string Person::select_game() {
    int game = rand() % 4;
    return game_genre[game];
    }

    // constructor knowing only first and last name
    Person::Person(const string the_first, const string the_last)
    : first_name{the_first}, last_name{the_last}
    {
    }

    // constructor knowing the first and last name and fav (movie, music, game)
    Person::Person(const string first, const string last, string movie, string music, string game)
    : first_name{first}, last_name{last}, fav_movie{movie}, fav_music{music}, fav_game{game}
    {
    }

    // destructor
    Person::~Person() {}

    string Person::get_first_name(){
        return this->first_name; } // returns string which cannot be changed

    string Person::get_last_name(){
        return this->last_name; } // returns string which cannot be changed

    string Person::get_fav_movie(){
        return this->fav_movie; } // returns string of movie genre

    string Person::get_fav_music(){
        return this->fav_music; } // returns string of music genre

    string Person::get_fav_game(){
        return this->fav_game; } // returns string of game genre

    // sets the favorite game_genre to the incoming string
    void Person::set_fav_game(std::string new_game){
        this->fav_game = new_game; }

    // sets the favorite movie_genre to the incomning string
    void Person::set_fav_movie(std::string new_movie){
        this->fav_movie = new_movie; }

    // sets the favorite music_genre to the incoming string
    void Person::set_fav_music(std::string new_music){
        this->fav_music = new_music; }

    void Person::to_string(){
        cout << "\n" << get_last_name() << " " << get_first_name() << ":"
        << "\n\tfavorite movie genre is " << get_fav_movie() << "."
        << "\n\tfavorite music genre is " << get_fav_music() << "."
        << "\n\tfavorite game genre is " << get_fav_game() << "." << endl;
    }

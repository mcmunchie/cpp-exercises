#include <iostream>
using namespace std;

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

class Person {
public:

      friend class Friends;

      // constructor knowing first and last name only
      Person(const std::string, const std::string);

      // constructor knowing first and last name and fav (movie, music, game)
      Person(const std::string, const std::string, std::string, std::string, std::string);

      // destructor
      ~Person();

      std::string get_first_name(); // getter for first name
      std::string get_last_name(); // getter for last name
      std::string get_fav_movie(); // getter for movie genre
      std::string get_fav_music(); // getter for music genre
      std::string get_fav_game(); // getter for game genre
      void to_string();

      void set_fav_movie(std::string); // setter for movie genre
      void set_fav_music(std::string); // setter for music genre
      void set_fav_game(std::string); // setter for game genre

      static std::string select_movie();
      static std::string select_music();
      static std::string select_game();


private:
      std::string first_name;
      std::string last_name;
      std::string fav_movie = "none";
      std::string fav_music = "none";
      std::string fav_game = "none";

      // create three string arrays with genres for music, movies and games
      const static std::string music_genre[5];
      const static std::string movie_genre[4];
      const static std::string game_genre[4];

};


#endif //PERSON_PERSON_H

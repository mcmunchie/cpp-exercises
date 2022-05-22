#include "Friend.h"
#include "Person.h"
#include <array>
#include <iostream>

    // constructor list of people, may or may not have friends
    Friend::Friend(std::array<Person, 5>& these_people)
      : friend_list{these_people} {
    }

    // update list of friends to ensure that each friend has preferences
    void Friend::update_friends() {
      for (int x = 0; x < 5; x++){
        if (this->friend_list[x].get_fav_movie() == "none") { // checking one indicates all three are empty
          // calls Person::select...to get the genre
          //    // which is inside the function call from Person
          //    //    // in order to update an array inside of Friend
          this->friend_list[x].set_fav_movie(Person::select_movie());
          this->friend_list[x].set_fav_music(Person::select_music());
          this->friend_list[x].set_fav_game(Person::select_game());
        }
      } 
    }

    void Friend::print_favs() {
      for (int x = 0; x < 5; x++) {
        this->friend_list[x].to_string();
      }
    }

    void Friend::friend_of_friend() {
      for (int x = 0; x < 4; x++) {
        string favmovie = this->friend_list[x].get_fav_movie();
        string favmusic = this->friend_list[x].get_fav_music();
        string favgame = this->friend_list[x].get_fav_game();
        for (int y = 1; y < 5; y++) {
          string favmov = this->friend_list[y].get_fav_movie();
          string favmus = this->friend_list[y].get_fav_music();
          string favgam = this->friend_list[y].get_fav_game();
          if ((favmovie == favmov) && (friend_list[x].get_first_name() != friend_list[y].get_first_name())){
            cout << "\n\t" << friend_list[x].get_first_name() << " and "
            << friend_list[y].get_first_name() << " share an interest in movies."; }
          if ((favmusic == favmus) && (friend_list[x].get_first_name() != friend_list[y].get_first_name())){
            cout << "\n\t" << friend_list[x].get_first_name() << " and "
            << friend_list[y].get_first_name() << " share an interest in music."; }
          if ((favgame == favgam) && (friend_list[x].get_first_name() != friend_list[y].get_first_name())){
            cout << "\n\t" << friend_list[x].get_first_name() << " and "
            << friend_list[y].get_first_name() << " share an interest in games."; }
        }
      }
    }

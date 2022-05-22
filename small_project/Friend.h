#include "Person.h"
#include <iostream>
#include <array>
// #include <cstdlib>

using namespace std;

#ifndef FRIEND_FRIEND_H
#define FRIEND_FRIEND_H


class Friend {
public:
    // constructor knowing first and last name only
    Friend(std::array<Person, 5>&);

    // update friends list to make sure each have favorites
    void update_friends();

    // display friend favorites
    void print_favs();

    // find friends for friends
    void friend_of_friend();

private:
    //std::array<Person, 5>& friend;
    std::array<Person, 5>& friend_list;

};


#endif //FRIEND_FRIEND_H

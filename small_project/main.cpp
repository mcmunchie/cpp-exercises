#include <iostream>
#include "Person.h"
#include "Friend.h"
using namespace std;

int main() {

    cout << "Small Project Driver" << endl;

    // instantiate five person objects with favorites
    // by calling the global member functions (select...movie, music, game)
    Person agent_a ("Soobin", "Choi", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_b ("Yeonjun", "Choi", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_c ("Beomgyu", "Choi", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_d ("Taehyun", "Kang", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_e ("Kai", "Huening", Person::select_movie(), Person::select_music(), Person::select_game());

    // test if Person class is implemented properly
    // agent_a.to_string();

    // instantiate Five People Objects without favorites
    Person agent_f ("Yeji", "Hwang");
    Person agent_g ("Jisu", "Choi");
    Person agent_h ("Ryujin", "Shin");
    Person agent_i ("Chaeryeong", "Lee-Chae");
    Person agent_j ("Yuna", "Shin");

    // declare a list of 5 people of data type Person
    array<Person, 5> people_list{agent_a, agent_f, agent_g, agent_h, agent_i};
    Friend my_friends{people_list};

    // my_friends.print_favs();
    my_friends.update_friends();
    my_friends.print_favs();
    cout << "\nChecking shared interests:";
    my_friends.friend_of_friend();

    return 0;
}

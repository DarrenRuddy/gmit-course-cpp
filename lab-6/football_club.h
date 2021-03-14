                        // football club.H //
#include "player.h"
#include <iostream>
using namespace std;
#pragma once

 int max_squad = 23;
 int index_no  = 0;
                       // Creating a class called FootballClub //
class FootballClub{

private:                                // These elements are Private and not externally accessable //

    string clubname;
    string district;
    string stripColour;
    player Squad [23];
    player Team [15];

public:                                 // These elements are Public and are externally accessable //
    FootballClub(string clubname);
    FootballClub(string clubname, string district);
    /*{
        this->clubname = clubname;
        this->district = district;
    }
*/
    void setClubname(string clubname);
    string getClubname();
    void printInfo();


    void AddPlayer_Squad (player tmp, int position){


    for (index_no; index_no<max_squad; index_no++);

    Squad[position] .getDOB();

    }
    void AddPlayer_Team (player tmp);
};

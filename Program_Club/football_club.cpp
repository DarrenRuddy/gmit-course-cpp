                        // football club.cpp //


#include "football_club.h"


                        // Constructor //
    FootballClub::FootballClub(string clubname, string district){
        this-> clubname = clubname;
        this-> district = district;
        }

                       // Constructor //
    FootballClub::FootballClub(string clubname){
        this-> clubname = clubname;
        }

                        // Print Function //
    void FootballClub::printInfo(){
        cout<<clubname<<endl<<district<<endl;
        }

                        // getter funtion //
    string FootballClub::getClubname(){
        return clubname;
        }


                        //setter function //
    void FootballClub::setClubname(string clubname){
        this-> clubname = clubname;
        }



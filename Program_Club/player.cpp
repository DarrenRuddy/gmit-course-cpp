                        // player.cpp //
#include "player.h"


                        // Constructor //
player::player(string forename, string surname, string position, string mobileNumber){
        this->forename = forename;
        this->surname = surname;
        this->position = position;
        this->mobileNumber = mobileNumber;
    }

                         //setter function //
    void player::setname(string forename, string surname){
        this-> forename = forename;
        this-> surname = surname;
    }

                        // Print Function //
    void player::printInfo(){
        cout << forename <<" "<< surname <<endl << position << endl<< mobileNumber <<endl;
    }



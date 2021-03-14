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
    void player::setname(string forename, string surname, string DOB){
        this-> forename = forename;
        this-> surname = surname;
        this-. DOB = DOB;
    }

                        // Print Function //
    void player::printInfo(){
        cout << forename <<" "<< surname <<endl << position << endl<< mobileNumber <<endl;
    }



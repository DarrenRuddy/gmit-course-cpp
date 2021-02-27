                             // player.H //

#include <iostream>
using namespace std;






   // Creating a class called Player //
class player{

private:                                // These elements are Private and not externally accessable //

    string forename;
    string surname;
    string position;
    string mobileNumber;

public:                                 // These elements are Public and are externally accessable //

    player(string forename, string surname, string position, string mobileNumber){
        this->forename = forename;
        this->surname = surname;
        this->position = position;
        this->mobileNumber = mobileNumber;
    }

    void setname(string forename, string surname);
        string getforename(){
        return forename;
    }
        string getsurname(){
        return surname;
        }

    void printInfo(){
        cout << forename <<" "<< surname <<endl << position << endl<< mobileNumber <<endl;
    }

};

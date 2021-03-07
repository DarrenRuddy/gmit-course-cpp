                        // player.H //

#include <iostream>
using namespace std ;






                        // Creating a class called Player //
class player{

private:                                // These elements are Private and not externally accessable //

    string forename;
    string surname;
    string position;
    string mobileNumber;

public:                                 // These elements are Public and are externally accessable //

    player(string forename, string surname, string position, string mobileNumber);

    void setname(string forename, string surname);
        string getforename();
        string getsurname();

    void printInfo();

};

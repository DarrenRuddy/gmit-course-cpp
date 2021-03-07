                        // football club.H //

#include <iostream>
using namespace std;


                        // Creating a class called FootballClub //
class FootballClub{

private:                                // These elements are Private and not externally accessable //

    string clubname;
    string district;
    string stripColour;

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




};

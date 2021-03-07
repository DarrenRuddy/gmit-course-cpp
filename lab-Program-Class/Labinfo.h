#include<iostream>
using namespace std;








void Labinfo();
/*{                         // Creating a Function Called LabInfo //
    cout << "Darren Ruddy\n";
    cout << "Lab Using Classes\n\n\n";

}*/


class LabInfo{                          // Creating a class called Lab Info //

private:                                // These elements are Private and not externally accessable //
    int day;
    int month;
    int year;

public:                                 // These are public elementa snd are Externally accessable //
    string name;
    string labId;


    void printinfo();
void setdate( int daytem, int montem, int yeartem);

};

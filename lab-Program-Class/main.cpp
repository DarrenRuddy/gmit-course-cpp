#include <iostream>
#include <iomanip>
#include "Labinfo.h"
using namespace std;

/*
void Labinfo(){                         // Creating a Function Called LabInfo //
    cout << "Darren Ruddy\n";
    cout << "Lab Using Classes\n\n\n";
}


class LabInfo{                          // Creating a class called Lab Info //

private:                                // These elements are Private and not externally accessable //
    int day;
    int month;
    int year;

public:                                 // These are public elementa snd are Externally accessable //
    string name;
    string labId;


    void printinfo(){                                                                               // Print Function //
        cout <<setw(11)<<name <<"\n"<< labId <<"\n"<< "Date:" << setw(4)<<day <<setw(3)<< month <<setw(5)<< year <<"\n\n";   // Creating the 3 line printout to the Concole //
    }
void setdate( int daytem, int montem, int yeartem){                                                 // Function to set the date //
    day     = daytem;
    month   = montem;
    year    = yeartem;
}

}; */
int main(){

  Labinfo();                            // Calling the LabInfo Function Created Above //

  LabInfo MyInfo;                       // Creating an object Usint the Class MyInfo  //

   MyInfo.name  = "Darren Ruddy";             // Next 5 Lines Sets the values of the Strings //
   MyInfo.labId = "Lab Program Class";  // Used Slightly different names for the purpose of demonstration //
   //MyInfo.day   = 12;                 // When I made the class elements private I had to comment out as my cout on line 26 was printing random numberes presumabely from memory //
   //MyInfo.month = 2;
   //MyInfo.year  = 2021;

   MyInfo.setdate (12,2,2021);           // This places the date int's into the private elements of the class,Had to place this aboue the print function as it was printing random numbers otherwise //
   MyInfo.printinfo ();                  // Print function to printout the values of the class //

   return 0;
   }

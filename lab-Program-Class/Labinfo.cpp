#include "Labinfo.h"
#include <iomanip>


void LabInfo::printinfo(){                                                                               // Print Function //
    cout <<setw(11)<<name <<"\n"<< labId <<"\n"<< "Date:" << setw(4)<<day <<setw(3)<< month <<setw(5)<< year <<"\n\n";   // Creating the 3 line printout to the Concole //
    }
void LabInfo::setdate( int daytem, int montem, int yeartem){                                                 // Function to set the date //
    day     = daytem;
    month   = montem;
    year    = yeartem;
}

#include <iostream>

using namespace std;

#include"Functions.h"



int main(){

     //Exercise 1 Name and Lab//

    cout<< "      Task 1  Display Details      " <<endl;
    labinfo();
    cout<< endl;
    cin.get();


    //Exercise 2 Largest Number//

int num1, num2;

    cout<< "      Task 2  Printout Largest Number      " <<endl;
    cout<< "Enter First Number" << endl;
    cin>> num1;

    cout<< "Enter Second Number" << endl;
    cin>> num2;
    largestnumber(num1,num2);
    cout<< endl;
    cin.ignore();
    cin.get();



    //Exercise 3 number between 1 and 100//

int usernumber;
    cout<< endl;
    cout<<"      Task 3 Verify If Number Is Between 1 And 100      ";
    cout<< endl;
    cout<<"Check if Numner is between 1 & 100";
    cout<< endl;
    cin>> usernumber;
    num1to100(usernumber);
    cout<< endl;
    cin.ignore();
    cin.get();


    //Exercise 4 Question/Answer with switch statment//

int userselection;
    cout<< endl;
    cout<<"      Task 4 select Question Or Answer      ";
    cout<<endl;
    cout<< "Please Select 1 For Question Or 2 For Answer";
    cout<<endl;
    cin>>userselection;
    switch(userselection){
case 1:
    cout<< "The question Is";
    cout<< endl;
    break;
case 2:
    cout<< "The Answer Is";
    cout<< endl;
    break;
    cout<<endl;
    }

    //Exercide 5 calculate circle area using Radius//

float radius;
    cout<<endl;
    cout<<"      Task 5  Calculate The Area Of A Circle      ";
    cout<<endl;
    cout<< "Enter Radius Of The Circle";
    cout<< endl;
    cin>> radius;
    cout<<"The Area Of The Circle Is   ";
    cout<<areaofcircle(radius);
    cout<<endl;
    cin.ignore();
    cin.get();

    //Exercise 6 Calculate The Area Of A Rectangle//

float width1, width2;
    cout<<endl;
    cout<<"      Task 6  Calculate The Area Of A Rectangle      ";
    cout<< endl;
    cout<< "Enter Side 1";
    cout<<endl;
    cin>> width1;
    cout<<endl;
    cout<< "Enter Side 2";
    cout<<endl;
    cin>> width2;
    cout<<endl;
    cout<<"The area Of The Rectangle is  ";
    cout<<areaofrect(width1,width2);
    cout<<endl;
    cin.ignore();
    cin.get();

    //Exercise 7 Temp & Humidity Alarm//

float temp, humidity;
    cout<< endl;
    cout<<"      Task 7  Temperature And Humidity Alarm      ";
    cout<<endl;
    cout<<"Enter Temperature";
    cout<<endl;
    cin>> temp;
    cout<<endl;
    cout<<"Enter Humidity";
    cout<<endl;
    cin>> humidity;
    cout<<endl;
    temphumidityalarm(temp, humidity);
    cout<<endl;
    cin.ignore();
    cin.get();


    //Exercise 8 Area of Circles Radius 1 through to 120//

int (radex8);
    radex8=1;
    cout<<"      Task 8  Printout the Areas Of Circles With Radius 1 To 120      ";
    cout<<endl;
    for(radex8>=0; radex8<=120;radex8++){
    cout<< "Radius Is ";
    cout<< radex8;
    cout<<endl;
    cout<<"The Area Of The Circle Is  ";
    cout<<areaofcircle(radex8);
    cout<<endl;
    cout<<endl;
    }

    //Exercise 9 convert temperature//

int userinput;
float far, celc;

    cout<<endl;
    cout<<"      Task 9  Temperature Conversion      ";
    cout<<endl;
    cout<<" Select 1 to Convert to Farenheight Or 2 To convert to celsius";
    cout<<endl;
    cin>> userinput;

    if (userinput ==1){
        cout<< " Enter Farenheight Value ";
        cout<<endl;
        cin>> far;
        cout<<endl;
        fartoc(far);
        cout<< fartoc(far);
        cout<<endl;
        cin.ignore();
        cin.get();
    }

    if (userinput==2){
        cout<< " Enter Celcius Value ";
        cout<<endl;
        cin>> celc ;
        cout<<endl;
        cout<<" The Farenheight Value Is  ";
        celtofar(celc);
        cout<< celtofar(celc);
        cout<<endl;
        cin.ignore();
        cin.get();
    }
    //Exercise 10 Find Even//

 int num =1;

    cout<<"      Task 10 Printout Even Numbers     ";
    cout<<endl;

        for(num>=0; num<=1000; num++){
        findevnumber(num);
        cout<<endl;
        }

    //Exercise 11 Find odd between 2 Values//

int num11, num12;
    cout<<"      Task 11 find the odd numbers in 2 numbers entered      ";
    cout<<endl;
    cout<<" Enter First Number ";
    cin>> num11;
    cout<<endl;
    cout<<" Enter Second Number ";
    cin>> num12;
    cout<<endl;
        for(;num11 <= num12;num11++){
            findoddnumber(num11);
        }
        cout<<endl;

     //Exercise 12 Find odd values in an array using function from Q11//
int number[] = {0,1,2,3,4,5,6,7};
int b=0;
    cout<<"      Task 12 odd numbers in an array      ";
    cout<<endl;
    cout<< " Enter First Number";
    cout<<endl;
    cin>> number[0];
    cout<<endl;
    cout<< " Enter Second Number";
    cout<<endl;
    cin>> number[1];
    cout<<endl;
    cout<< " Enter Third Number";
    cout<<endl;
    cin>> number[2];
    cout<<endl;
    cout<< " Enter Forth Number";
    cout<<endl;
    cin>> number[3];
    cout<<endl;
    cout<< " Enter Fifth Number";
    cout<<endl;
    cin>> number[4];
    cout<<endl;
    cout<< " Enter Sixth Number";
    cout<<endl;
    cin>> number[5];
    cout<<endl;
    cout<< " Enter Seventh Number";
    cout<<endl;
    cin>> number[6];
    cout<<endl;
    cout<< " Enter Last Number";
    cout<<endl;
    cin>> number[7];
    cout<<endl;
    cout<< "The Odd Numbers Are  ";
    cout<<endl;
        for(int b =0; b<8; b++){
        findoddnumber(number[b]);
        cout<<endl;
    }
    //Exercise 13 Random Numbers//
    cout<<"      Task 13 Random Numbers      ";
    cout<<endl;
    RandomNum ();

    //Exercise 14 Repair Functions//
    cout<<"      Task 14 part 1 Print out Numbers      ";
    cout<<endl;
    printoutnumbers();
    cout<<endl;
    cin.ignore();
    cin.get();


    cout<<"      Task 14 part 2 * Finding the sum 1 + 2 + 3 + ... + 20 *      ";
    cout<<endl;
    addnumbers1to20();
    cout<<endl;
    cin.ignore();
    cin.get();

    cout<<"      Task 14 part 3 * Average a list of grades terminated by -1 *      ";
    cout<<endl;
    gradesum();
    cout<<endl;
    cin.ignore();
    cin.get();

    //Exercise 15 Finished//
    cout<< "   Exercise 15   Finished I need A Pint";
    cout<<endl;
    hallelujah();
    cout<<endl;
    }














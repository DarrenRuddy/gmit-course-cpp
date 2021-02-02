#include <iostream>
#include <time.h>
#include <stdlib.h>

    //Exercise 1 Lab Info Printout//
void labinfo()
{
    cout << "Darren Ruddy" << endl;
    cout << "Lab #2" << endl;


}
    //Exercise 2 Largest Number Function//
void largestnumber(int num1, int num2)
{
     if (num1>num2){
        cout<<"The Largest Value Is " <<num1;
        }
        else{
            cout<<"The Largest Value Is " <<num2;
        }
}
    //Exercise 3 Number Between 1 and 100//
void num1to100 (int usernumber)
{
    if (usernumber >=1 &&usernumber <=100){
        cout<< "Valid Number";
    }
    else{
    cout<<"Invalid Number";
    }
}

    //Exercise 5 Area of Circle//
float areaofcircle(float radius){
    float area;
    float pi=3.14159;
    area = radius*radius*pi;
    return area;
}
    //Exercise 6 Area Of Rectangle//
float areaofrect(float width1, float width2){
    float area;
    area=width1*width2;
    return area;
}

    //Exercisse 7 Function to alarm in temp or humidity are over a set value//

void temphumidityalarm (float temp, float humidity){

    if(temp>95){
        cout<< "WARNING Temperature To High";
        cout<<endl;
    }
    if(humidity>90){
        cout<< "WARNING Humidity To High";
        cout<<endl;
    }}
    //Exercise 9 Farenheight to celsius//

float fartoc(float far){
float celsius;
    celsius = (far - 32)*5;
    celsius = celsius/9;
    return celsius;
}
    //Exercise 9 Celsius to Farenheight//

float celtofar( float cels){
float farenheight;
    farenheight = ((cels*9/5)+32);
    return farenheight;

}
    //Exercise 10 Even Number Finder//
void findevnumber( int num){
    if(num%2==0){
        cout<< num;
        cout<< "   Is Even";
        cout<< endl;
       }
}
    //Exercise 11 Odd Number Finder//

void findoddnumber(int num){
    if(num%2==1){
        cout<< num;
        cout<< "  Is Odd";
        cout<<endl;
    }
}

    //Exercise 13 Random Numbers//

void RandomNum (){

int number;
int r;
srand(time(0));
cout<< "6 Random numbers selected between 0 & 100";
cout<<endl;
for(r = 1; r <= 6; r++)
{
number = rand() % 100;
cout<< number;
cout<<endl;
}
cout<<endl;
}

    //Repair function and print out numbers 5 to 9//
void printoutnumbers(){
int i=5;
            while (i < 10){
                cout << i;
                cout << endl;
                    i = i + 1;
                }
}

    //* Finding the sum 1 + 2 + 3 + ... + 20 *//
void addnumbers1to20(){
int i = 1;
int sum = 0;
            while (i <= 20){
                sum = sum + i;
                    i = i + 1;
                }
                cout << "The sum = ";
                cout<<sum;
                cout<<endl;
}


    //* Average a list of grades terminated by -1 *//
 void   gradesum(){
int sum = 0;
int count = 0;
int grade =0;
    cout << "Enter grade (-1 to end): "; // prompt user for grade
    cin >> grade; // read grade
    while (grade != -1)
{
    sum = sum + grade;
    count = count + 1;
    /* Get next grade */
    cout << "Enter grade (-1 to end): ";
    cin >> grade;
}
    if (count > 0)
    cout << "Average is " << (double) sum / count;
 }

void hallelujah(){
int a=1;
    while(a<=6)
 {
        a++;
        cout<<"Finished after"<<endl;
 }
{
        for(int c = 7; c <= 9;c++)

        cout<<"*Finished 14"<<endl;
}
{
        int i = 8;
        do {
        cout<< "Finished Hours";
        cout<<endl;
        ++i;
    }
        while (i<= 10);}}














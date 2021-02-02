#include <iostream>


	using namespace std;


	//1. Create a function called LabInfo() and call it from main//
	void LabInfo() {
        cout << "    Darren Ruddy\n";
        cout << "       Lab #3\n\n\n";

	 }


	// 2. Create program to takes in 6 numbers into an array. Use a loop to achieve this task to
    //    cin the users input. All numbers should be (>0 and <100). Check the users input. Try
    //    using the debug features during the lab.
	 void PrintArray(int num[],int Size){


	            for(int a = 0;a <Size; a++){
	            cout <<"Value = "<< num[a] <<" Mem Location = ";
	            cout << &num[a] <<"\n";
	            }


	 }


	 // 5. Create a function that will pass the array by reference and also the scalar value and
     //    multiply each number in the array by the scalar.
	 void ArrayByScalor(int scalfactor, int *j, int arraysize){
	        for ( int i = 0 ; i <arraysize; ++i){
	        *j = *j * scalfactor;
	            j++ ;
	        }
	 }


		//function to print 2d array in shape of Xmas tree
	void Tree(){
	string matrix[7]={
                            {"         X    "},
                            {"        XoX   "},
                            {"       X0X0X  "},
	                        {"      XoX0XoX "},
	                        {"     X0XXoXX0X"},
	                        {"         0    "},
                            {"         X    "},
                            };


	        for(int c=0;c < 7;++c){

	             cout << matrix[c];

	        cout <<endl;
	        }

	}


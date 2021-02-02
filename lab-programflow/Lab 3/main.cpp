#include <iostream>
#include "function.h"
    using namespace std;


	int main(){



	    //     Task 1     //
	    // Create a function called LabInfo() and call it from main  //
        cout << "       Task 1\n\n";
	    LabInfo();


	    //     Task 2     //
	    //  Create program to takes in 6 numbers into an array. Use a loop to achieve this task to  //
        //  cin the users input. All numbers should be (>0 and <100). Check the users input. Try  //
        //  using the debug features during the lab.  //
        const int array1 = 6;
        int num[array1];

        cout << "       Task 2\n\n";
	        for (int a = 0;a < array1; ++a){


        cout << "Enter Number between 1 and 100 \n";
        lbl1:
        cin >> num[a];
	  	        if (num[a] <0 or num[a]  >100) {
        cout << "The Number you entered is out of range.\n";
          goto lbl1;
	        }
	    }
	        cout << "\n\n\n" ;


	    //   Lab Task 3   //
	    //3. Print the array of numbers and memory locations using a function and pass the array //
        //   by value.   //
         cout << "       Task 3       \n\n";
         cout << "Print the array of numbers and memory locations using a function and pass the array\n\n";
	     PrintArray(num,array1);
            cout << "\n\n\n";


	    //   Lab Task 4
	    //4. Ask the user to input 1 number called scalar .//
	    int scalfactor;
            cout << "       Task 4\n\n";
	        cout << "Enter a Scalor Number To multiply the previous array by\n";
	        cin >> scalfactor;
	        cout << "\n\n\n";


	    //   Lab Task 5
	    //5. Create a function that will pass the array by reference and also the scalar value and  //
        //   multiply each number in the array by the scalar  //
	    ArrayByScalor(scalfactor,&num[0],array1);
            cout << "       Task 5\n\n";
	        cout << "Previous Array multiplied by Scalor Number\n\n\n\n";


        //   Lab Task 6  //
	    //6. Print the array of numbers and memory locations using a function and pass the array   //
        //   by value.//
            cout << "       Task 6      \n\n";
	    PrintArray(num,array1);
	        cout << "\n\n\n";


	    //   Lab Task 7  //
	    //7. Create new 2d array and design your own tree in a new function to print the tree out.  //

            cout << "       Task 7 \n\n";
	    Tree();

	}

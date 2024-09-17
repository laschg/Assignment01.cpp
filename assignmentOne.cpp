#include <iostream>
#include <iomanip>
using namespace std;

#define DEF_SIZE 5

int main()
{
	// constant size - necessary for standard statically-allocated array definitions
	const int SIZE = 5;

	// statically-allocated variables with a variety of data types1
	int		myInt;		// camelCase naming scheme:  
	float	myFloat;	//	- first word is all lowercase
	double	myDouble;	//	- every word after has an uppercase first letter and the rest lowercase
	
	// statically-allocated arrays
	// *NOTE: a constant size declarator can be provided by a #define, a const variable, or a hard-coded numerical literal
	//        examples for each have been provided - notice that all size declarations are equal to 5
	int		myIntArray[DEF_SIZE];
	float	myFloatArray[SIZE];
	double	myDoubleArray[5];

	// Exercises for you to complete:
	// ******************************
	
	// TASK 1. Use cin to read in a value for myInt, myFloat, and myDouble;
	cin >> myInt;
	cin >> myFloat;
	cin >> myDouble;
	
	// TASK 2. Use cout to print each new value to the screen
	
	// TASK 3. Use a for loop to read in 5 values for each of our 3 arrays: myIntArray, myFloatArray, and myDoubleArray
	for(int i = 0; i<5; i++)
	{
		cin >> myIntArray[i];
		cin >> myFloatArray[i];
		cin >> myDoubleArray[i];
	}

	cout << "myInt: " << myInt << endl;
	cout << "myFloat: " << myFloat << endl;
	cout << "myDouble: " << myDouble << endl;
	
	// TASK 4. Use a for loop to print out all 5 values for each array
	// *NOTE: look at the sample output given to you in the Lab 1 handout - your formatting must match exactly
	// *HINT: at the top of this file, notice line 2: "#include <iomanip>" 
	//        functionality provided by the "iomanip" header file will allow you to accomplish this exercise
	// * The first line is given to you - it formats the output stream to display numbers in fixed-point notation
	// * and display floating-point values with 2 digits of precision to the right of the decimal point
	cout << fixed << setprecision(2);
	cout << setw(20) << "myIntArray" << setw(20) << "myFloatArray" << setw(20) << "myDoubleArray" << endl;
	for(int i = 0; i<5; i++)
	{
		cout << setw(20) << myIntArray[i] << setw(20) << myFloatArray[i] << setw(20) << myDoubleArray[i] << endl;
	}
	

	// TASK 5. Print out the size in bytes of each variable used in the exercises: myInt, myFloat, myDouble, myIntArray, myFloatArray, and myDoubleArray
	// *NOTE: you may NOT print out a literal value for the number of bytes (for example: cout << 4; or cout << "4";)
	//        you must use the C++ language to determine the size of each variable

	cout << "The size of myInt: " << sizeof(myInt) << " bytes" << endl;
	cout << "The size of myFloat: " << sizeof(myFloat) << " bytes" << endl;
	cout << "The size of myDouble: " << sizeof(myDouble) << " bytes" << endl;
	
	int sizeIntArray = 0;
	int sizeFloatArray = 0;
	int sizeDoubleArray = 0;

	for(int i = 0; i<5; i++)
	{
		sizeIntArray += sizeof(myIntArray[i]);
	}
	for(int i = 0; i<5; i++)
	{
		sizeFloatArray += sizeof(myFloatArray[i]);
	}
	for(int i = 0; i<5; i++)
	{
		sizeDoubleArray += sizeof(myDoubleArray[i]);
	}
	
	cout << "The size of myIntArray: " << sizeIntArray << " bytes" << endl;
	cout << "The size of myFloatArray: " << sizeFloatArray << " bytes" << endl;
	cout << "The size of myDoubleArray: " << sizeDoubleArray << " bytes" << endl;

	return 0;
}

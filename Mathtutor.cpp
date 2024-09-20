// Mathtutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: yochanan Allen 
// Project: Math tutor
// Date: 09/20/24
//

#include <iostream>
#include <random>


using namespace std;

int main()
{
	int NUM1 = rand() % 1000 + 1;
	int NUM2 = rand() % 1000 + 1;
	int mathproblem = (NUM1 + NUM2);
	int A = mathproblem;

	cout << "solve this problem " << NUM1 << " + " << NUM2 << " = " << endl;
	cout << " Press any key then press enter for Answer " << endl;

	cin.ignore();
	cin.get();

	cout << "The answer is " << mathproblem << endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// ProjectHomework6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime> // Library to use Random

using namespace std; // Std to not write "std::" in every command

int main()
{

	// First block to inizialize values into variables
	int x, y = 0;
	int** myArrey = new int*[10]; // Creating Arrey with dinamic memory on 10 students and 13 marks for every student.
	int sum = 0; 
	int sum2 = 0;
	int sum3 = 7;
	int summaryOfTheStudents;
 
	// --------------------------
	// Filling arrey with values "i" is for students and "j" for Marks them. Task 4.0

	for (int i = 0; i < 10; i++) {
		myArrey[i] = new int[13];
		int Ia = i + 1;
		cout << Ia << " Student";
		for (int j = 0; j < 13; j++) {
			int randNum2 = rand() % 13;
			myArrey[i][j] = randNum2;
			sum += myArrey[i][j];

		}

		sum2 = sum / 10; // Task 4.1.

		// Task 4.2
		if (sum2 < 6) {
			cout << "  " << sum2 << " - Don't atested" << endl;
		}
		else if (sum2 > 8) {
			cout << "  " << sum2 << " - Great" << endl; // Task 4.3
		}
		else if (sum2 > 9) {
			sum = sum++;
		}
		else {
			cout << "  " << sum2 << endl;
		}
		sum2 = 0;
		sum = 0;
		
	}

	cout << "-----------------------" << endl;

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 13; j++) {
			cout << myArrey[i][j] << " ";
		}
		cout << endl;

	}
	if (sum3 > 6) {
		cout << "Greate" << endl;
		cout << "-----------------------" << endl;
		for (int i = 0; i < 10; i++) {

			for (int j = 0; j < 13; j++) {
				if (myArrey[i][j] > 9) {
					cout << myArrey[i][j] << " ";
				}
			}
		}
	}


	// task 4.5
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 13; j++) {
			if (myArrey[i][j] < 9) {
				
				if (myArrey[i][j] < 9) {
					myArrey[i][j] = rand() % 13;
					
					if (myArrey[i][j] < 9) {
						myArrey[i][j] = rand() % 13;
						
					}
				}
			}
		}
	}

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 13; j++) {
			if (myArrey[i][j] < 9) {
				summaryOfTheStudents++;
			}

		}
		cout << endl;
		if (summaryOfTheStudents == 10) {
			// i don't find a way to make last task 4.6 sorry.
		}
	}

	for (int i = 0; i < 10; i++) {
		delete[] myArrey[i];
	}
	
	delete[] myArrey;

	myArrey = nullptr; // deleting Arrey from operative memory.

}
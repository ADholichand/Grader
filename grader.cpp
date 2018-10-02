#include <stdafx.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream infile;
	ofstream outfile;
	string stuname;
	int hw1, hw2, test1, test2, finalExam, sum, avg, i, j, finalGrades;
	char lg;


	infile.open("c:\\users\\andrew.dholichand\\desktop\\studentGrades.txt", ios::in);
	outfile.open("c:\\users\\andrew.dholichand\\desktop\\finalGrades.txt", ios::out);

	for (j = 0; j < 4; j++) {
		infile >> hw1 >> hw2 >> test1 >> test2 >> finalExam;
		getline(infile, stuname);
		finalGrades = ((hw1 + hw2) / 2 * 30 / 100) + ((test1 + test2) / 2 * 30 / 100) + (finalExam * 40 / 100);

		switch (finalGrades / 10) {
		case 10:
		case 9: lg = 'A';
			break;
		case 8: lg = 'B';
			break;
		case 7: lg = 'C';
			break;
		case 6: lg = 'D';
			break;
		default: lg = 'F';
			break;
		}
		outfile << stuname << " : " << finalGrades << " " << lg << endl;

	}
	infile.close();
	outfile.close();

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	char stay = 'y';
	do {
		int user_choice;
		int sum = 0;
		int firstnum = 0;
		int secondnum = 1;
		cout << "What would you like the fibonacci sequence to go up to?\n";
		cin >> user_choice;
		cout << firstnum << endl;
		cout << secondnum << endl;
		while ((firstnum + secondnum) <= user_choice) {
			sum = firstnum + secondnum;
			cout << sum << endl;
			firstnum = secondnum;
			secondnum = sum;
		}
		cout << "Would you like to run again?(y/n)\n";
		cin >> stay;
	} while (tolower(stay) == 'y');
	
}

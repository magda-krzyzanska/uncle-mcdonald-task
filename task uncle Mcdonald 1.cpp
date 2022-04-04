//============================================================================
// Name        : task.cpp
// Author      : Mjut
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {
	string RUN = "RUN";
		string input;

		do {
		cout << "To start the program type RUN > " << flush;
		cin >> input;
		}

		while(input != RUN);

	int value;


	cout << "How many meters of fence do you have? Remember that the value has to be a natural number.  " << flush;
	cin >> value;



	while(!cin.good() || value < 0) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Remember that the value has to be a natural number." << flush;
			cin >> value;
	}

	int side_a;
	int side_b;

	if(value % 3 == 0){
		side_a = (value / 3);
		side_b = (value / 3);
	}

	else if (value % 3 == 1){
		side_a = (value / 3);
		side_b = (value / 3 + 1);
	}

	else if (value % 3 == 2){
		side_a = (value / 3 + 1);
		side_b = (value / 3 );
	}

	int area = side_a * side_b;

	cout << "Segment a should have " << side_a << " meters and segment b " << side_b << " meters. Optimal area is " << area << " squere meters." << endl;



return 0;
}

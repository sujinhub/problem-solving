#include <iostream>
using namespace std;

int main() {
	string input; cin >> input;
	int time = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] <= 'C') time += 3;
		else if (input[i] <= 'F') time += 4;
		else if (input[i] <= 'I') time += 5;
		else if (input[i] <= 'L') time += 6;
		else if (input[i] <= 'O') time += 7;
		else if (input[i] <= 'S') time += 8;
		else if (input[i] <= 'V') time += 9;
		else if (input[i] <= 'Z') time += 10;
	}
	cout << time;
}
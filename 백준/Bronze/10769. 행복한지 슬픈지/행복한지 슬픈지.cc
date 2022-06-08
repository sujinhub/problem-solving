#include <iostream>
#include <string>
using namespace std;

int main() {
	string happy = ":-)";
	string sad = ":-(";
	string input; getline(cin, input);

	if (input.find(happy) == string::npos && input.find(sad) == string::npos) {
		cout << "none";
		return 0;
	}

	int happy_counter = 0;
	int sad_counter = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input.find(happy, i) == i) {
			happy_counter++;
			i += 2;
		}
		if (input.find(sad, i) == i) {
			sad_counter++;
			i += 2;
		}
	}

	if (happy_counter == sad_counter) cout << "unsure";
	else if (happy_counter > sad_counter) cout << "happy";
	else if (happy_counter < sad_counter) cout << "sad";

	return 0;
}
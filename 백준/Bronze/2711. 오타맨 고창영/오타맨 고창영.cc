#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int wrong; string str;
		cin >> wrong >> str;
		for (int j = 0; j < str.length(); j++) {
			if (j + 1 == wrong) continue;
			cout << str[j];
		}
		cout << '\n';
	}
}
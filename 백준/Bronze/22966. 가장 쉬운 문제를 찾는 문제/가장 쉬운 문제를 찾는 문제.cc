#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string title; int level;
	string easiest_title; int easiest_level = 5;
	for (; N--;) {
		cin >> title >> level;
		if (easiest_level > level) {
			easiest_title = title;
			easiest_level = level;
		}
	}
	cout << easiest_title;
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int N, max = 0;
	string title, best_seller;

	map<string, int> board;

	for (cin >> N; N--;) {
		cin >> title;
		board[title]++;
	}

	for (auto& i : board) {
		if (i.second > max) {
			max = i.second;
			best_seller = i.first;
		}
	}
	
	cout << best_seller << '\n';
	return 0;
}
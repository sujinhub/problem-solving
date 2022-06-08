#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int dice[3], max, same, prize;
	cin >> dice[0] >> dice[1] >> dice[2];
	max = dice[0];

	if (dice[0] == dice[1] && dice[1] == dice[2]) {
		if (dice[0] == dice[1]) same = dice[0];
		else same = dice[1];
		prize = 10000 + same * 1000;
	}
	else if (dice[0] == dice[1] || dice[0] == dice[2] || dice[1] == dice[2]) {
		if (dice[0] == dice[1] || dice[0] == dice[2]) same = dice[0];
		else same = dice[1];
		prize = 1000 + same * 100;
	}
	else {
		for (int i = 1; i < 3; i++) if (max < dice[i]) max = dice[i];
		prize = max * 100;
	}

	cout << prize;
	return 0;
}
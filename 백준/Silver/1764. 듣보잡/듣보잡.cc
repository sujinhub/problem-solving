#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
	int N, M, cnt = 0;
	string name;
	map<string, int> person;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> name;
		person[name]++;
	}
	for (int j = 0; j < M; j++) {
		cin >> name;
		if (++person[name] == 2) cnt++;
	}

	cout << cnt << endl;
	for (auto& i : person) {
		if (i.second == 2)
			cout << i.first << endl;
	}
}
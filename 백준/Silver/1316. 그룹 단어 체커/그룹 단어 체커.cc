#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int N; cin >> N;
	int answer = N;

	while (N--) {
		string word; cin >> word;
		unordered_map<char, bool> map;

		for (int i = 0; i < word.size(); i++) {
			if (map[word[i]] == false) {
				map[word[i]] = true;
				while (word[i] == word[i + 1]) i++;
			}
			else {
				answer--;
				break;
			}
		}
	}

	cout << answer;
	return 0;
}
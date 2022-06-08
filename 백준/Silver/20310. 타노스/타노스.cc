#include <iostream>
#include <vector>
using namespace std;

int main() {
	string S; cin >> S;
	vector<int> one, zero;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] - '0') one.push_back(i);
		else zero.push_back(i);
	}

	for (int i = zero.size() / 2; i < zero.size(); i++) S[zero[i]] = NULL;
	for (int i = 0; i < one.size() / 2; i++) S[one[i]] = NULL;
	for (int i = 0; i < S.size(); i++) if (S[i] != NULL) cout << S[i];

	return 0;
}
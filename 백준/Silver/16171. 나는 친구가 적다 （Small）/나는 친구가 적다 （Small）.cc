#include <iostream>
using namespace std;

int main() {
	string S; cin >> S;
	string K; cin >> K;

	string temp;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] <= '9' && S[i] >= '0') continue;
		temp += S[i];
	}

	if (temp.find(K) != string::npos) cout << 1;
	else cout << 0;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	bool flag = false;

	for (int i = 1; i <= 5; i++) {
		string info; cin >> info;
		if (info.find("FBI") != string::npos) {
			cout << i << ' ';
			flag = true;
		}
	}

	if (!flag) cout << "HE GOT AWAY!";
	return 0;
}

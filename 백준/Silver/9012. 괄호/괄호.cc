#include <iostream>
using namespace std;

int main(void) {
	int T; cin >> T;
	for (; T--;) {
		string data; cin >> data;
		int cnt = 0;
		for (int i = 0; i < data.size(); i++) {
			if (data[i] == '(') cnt++;
			else cnt--;
			if (cnt < 0) {
				cout << "NO\n";
				break;
			}
		}
		if (cnt == 0) cout << "YES\n";
		else if (cnt > 0) cout << "NO\n";
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int l; cin >> l;
	string s; cin >> s;
	int cnt_2 = 0, cnt_e = 0;

	for (int i = 0; i < l; i++) {
		if (s[i] == '2') cnt_2++;
		else cnt_e++;
	}

	if (cnt_2 > cnt_e) cout << "2";
	else if (cnt_2 < cnt_e) cout << "e";
	else cout << "yee";

	return 0;
}

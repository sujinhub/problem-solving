#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str; cin >> str;
	string arr[3];
	string temp;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '/') {
			arr[cnt] = temp;
			temp = "";
			cnt++;
		}
		else temp += str[i];
	}

	arr[2] = temp;

	int K = stoi(arr[0]);
	int D = stoi(arr[1]);
	int A = stoi(arr[2]);


	if (K + A < D || D == 0) cout << "hasu";
	else cout << "gosu";

	return 0;
}

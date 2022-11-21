#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool flag[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string A, B, buf, ans;
	getline(cin, A);
	getline(cin, B);
	istringstream ss(B);

	while (getline(ss, buf, ' ')) flag[buf[0] - 'A'] = true;
	for (int i = 0; i < A.length(); i++)
		if (flag[A[i] - 'A'] && isupper(A[i])) A[i] = tolower(A[i]);

	cout << A;
	return 0;
}
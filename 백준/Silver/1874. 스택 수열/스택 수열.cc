#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	stack<int> s;

	int num = 1;
	string ans;

	for (int i = 0; i < n; i++) {
		int sq; cin >> sq;
		while (num <= sq) {
			s.push(num++);
			ans += "+\n";
		}
		if (s.top() == sq) {
			s.pop();
			ans += "-\n";
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	cout << ans;
	return 0;
}

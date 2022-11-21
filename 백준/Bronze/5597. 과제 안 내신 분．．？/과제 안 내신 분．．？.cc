#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	set<int> s;
	for (int i = 1; i <= 30; i++)
		s.insert(i);

	int n;
	for (int j = 0; j < 28; j++) {
		cin >> n;
		s.erase(n);
	}

	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << '\n';
	
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<int> v;

	while (N--) {
		int num; cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	
	int M; cin >> M;
	while (M--) {
		int num; cin >> num;
		if (binary_search(v.begin(), v.end(), num)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
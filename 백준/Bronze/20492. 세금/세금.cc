#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	float money; cin >> money;
	cout << int(money * 0.78) << ' ' << int(money - (money * 0.2 * 0.22));

	return 0;
}

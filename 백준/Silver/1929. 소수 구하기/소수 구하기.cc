#include <iostream>
using namespace std;

int main() {
	int m, n; cin >> m >> n;

	bool sieve[1000001] = {};
	for (int i = 2; i <= n; i++) sieve[i] = true;
	for (int i = 2; i * i <= n; i++)
		if (sieve[i])
			for (int j = i * i; j <= n; j += i)
				sieve[j] = false;
	
	for (int i = m; i <= n; i++)
		if (sieve[i]) cout << i << '\n';

	return 0;
}
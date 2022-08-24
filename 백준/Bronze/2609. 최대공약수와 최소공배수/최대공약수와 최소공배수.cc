#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	int mx = max(N, M);
    int mn = min(N, M);
    
	int s = 0;
	for (int i = 1; i <= mn; i++)
		if (!(mn % i) && !(mx % i)) s = i;

	int m = M * N / s;
	cout << s << '\n' << m;
    
    return 0;
}
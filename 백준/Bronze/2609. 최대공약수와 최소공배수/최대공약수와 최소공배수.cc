#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, s, m;
	cin >> N >> M;
	
	int mx = max(N, M);
  int mn = min(N, M);
    
	for (int i = 1; i <= mn; i++)
		if (!(mn % i) && !(mx % i)) s = i;

	m = M * N / s;
	cout << s << '\n' << m;
    
   return 0;
}
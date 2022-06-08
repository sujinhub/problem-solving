#include <iostream>
using namespace std;

int main() {
    int T, N, i = 0;
    int dp[41] = { 0,1 };

    for (i = 2; i < 41; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    for (cin >> T; T--;) {
        cin >> N;
        if (N == 0) cout << "1 0\n";
        else cout << dp[N - 1] << " " << dp[N] << "\n";
    }

    return 0;
}
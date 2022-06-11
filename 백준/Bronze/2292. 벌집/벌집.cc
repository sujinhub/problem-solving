#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    int sum = 1;
    int ans = 1;

    while (N > sum) {
        sum += 6 * ans;
        ans++;
    }

    cout << ans;
    return 0;
}
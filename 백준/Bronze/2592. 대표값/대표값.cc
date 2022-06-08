#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int sum = 0;
    unordered_map<int, int> map;

    int mx = 0;
    int mx_n = 0;
    for (int i = 0; i < 10; i++) {
        int n; cin >> n;
        map[n]++;
        if (map[n] > mx) {
            mx = map[n];
            mx_n = n;
        }
        sum += n;
    }

    cout << sum / 10 << '\n' << mx_n;
    return 0;
}
#include <iostream>
using namespace std;
int N;
char arr[200];

void solve(int i) {
    if (2 * i <= N) solve(2 * i);
    cout << arr[i];
    if (2 * i + 1 <= N) solve(2 * i + 1);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for (int test_case = 1; test_case <= 10; test_case++) {
        cout << '#' << test_case << ' ';
        cin >> N;
        int a, b, c;
        for (int i = 1; i <= N; i++) {
            cin >> a >> arr[i];
            if (2 * i <= N) cin >> b;
            if (2 * i + 1 <= N) cin >> c;
        }
        solve(1);
        cout << "\n";
    }

    return 0;
}
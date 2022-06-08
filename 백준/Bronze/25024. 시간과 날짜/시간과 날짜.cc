#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int month[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    int T; cin >> T;

    while (T--) {
        int x, y; cin >> x >> y;
        x <= 23 && y <= 59 ? cout << "Yes " : cout << "No ";
        x && y && x <= 12 && y <= month[x] ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}
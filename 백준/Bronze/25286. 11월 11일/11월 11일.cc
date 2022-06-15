#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    int T; cin >> T;
    while (T--) {
        int y, m; cin >> y >> m;

        if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0)) day[2] = 29;
        else day[2] = 28;

        if (!--m) {
            y--; m = 12;
        }

        cout << y << ' ' << m << ' ' << day[m] << '\n';
    }

    return 0;
}

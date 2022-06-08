#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int people = 0;
    int mx = 0;
    for (int i = 0; i < 10; i++) {
        int up, down; cin >> down >> up;
        people = people - down + up;
        if (mx < people) mx = people;
    }

    cout << mx;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    int bag = 0;

    while (N) {
        if (!(N % 5)) {
            bag += N / 5;
            break;
        }
        N -= 3;
        bag++;
    }

    cout << (N < 0 ? -1 : bag);
    return 0;
}
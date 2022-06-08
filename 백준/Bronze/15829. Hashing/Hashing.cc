#include <iostream>
using namespace std;

int main() {
    int M = 1234567891, L, a;
    unsigned long long r = 1, H = 0;
    string str;

    cin >> L >> str;

    for (int i = 0; i < L; i++) {
        a = str[i] - 'a' + 1;
        r %= M;
        H += a * r;
        r *= 31;
    }

    cout << H % M;

    return 0;
}
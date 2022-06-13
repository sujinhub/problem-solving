#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b, c, d;
    int A, B, C, D;

    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;

    cin >> A >> B >> C >> D;
    int SUM = A + B + C + D;

    cout << max(sum, SUM);
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x, y, z;
    while (1) {
        cin >> x >> y >> z;
        if (!x && !y && !z) break;
        if (x == y && y == z) cout << "Equilateral\n";
        else if (max({ x, y, z }) >= (x + y + z) - max({ x,y,z })) cout << "Invalid\n";
        else if (x != y && y != z && x != z) cout << "Scalene\n";
        else cout << "Isosceles\n";
    };

    return 0;
}

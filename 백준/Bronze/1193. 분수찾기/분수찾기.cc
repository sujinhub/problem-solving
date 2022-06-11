#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int X; cin >> X;

    int line = 0;
    while (X > 0) X -= ++line;

    if (line & 1) cout << 1 - X << '/' << line + X;
    else cout << line + X << '/' << 1 - X;
    
    return 0;
}
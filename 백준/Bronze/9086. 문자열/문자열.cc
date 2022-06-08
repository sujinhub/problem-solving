#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        string str; cin >> str;
        cout << str[0] << str[str.length() - 1] << '\n';
    }

    return 0;
}
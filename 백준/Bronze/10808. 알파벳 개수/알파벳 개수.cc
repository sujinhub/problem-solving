#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    unordered_map<char, int> map;
    string str; cin >> str;
    for (int i = 0; i < str.length(); i++) {
        map[str[i]]++;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        cout << map[i] << ' ';
    }

    return 0;
}
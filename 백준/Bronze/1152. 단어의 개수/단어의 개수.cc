#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int sz, cnt = 1;

    getline(cin, str);
    sz = str.size();

    if (str[0] == ' ') cnt--;
    if (str[sz - 1] == ' ') cnt--;

    for (int i = 0; i < sz; i++)
        if (str[i] == ' ') cnt++;
    

    cout << cnt;

    return 0;
}
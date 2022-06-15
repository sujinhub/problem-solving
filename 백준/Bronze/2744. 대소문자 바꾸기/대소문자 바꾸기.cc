#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if ('A' <= input[i] && input[i] <= 'Z') input[i] = tolower(input[i]);
        else input[i] = toupper(input[i]);
    }

    cout << input;
    return 0;
}

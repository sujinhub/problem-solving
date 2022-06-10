#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int cnt = 0;
    
    while (n--) {
        string word; cin >> word;
        if (word == "she" || word == "he" || word == "him" || word == "her") cnt++;
    }
    
    cout << cnt;
    return 0;
}

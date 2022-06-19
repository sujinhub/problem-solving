#include <iostream>
#include <string>
using namespace std;

string solve(int _N, string _U) {
    if (_N % 2 == 0) return "NOT POSSIBLE";

    if ((_U.substr(0, _N / 2) == _U.substr(_N / 2, _N / 2))
        && (_U.substr(1, _N / 2) == _U.substr(_N / 2 + 1, _N / 2))
        && (_U.substr(0, _N / 2) != _U.substr(1, _N / 2))) return "NOT UNIQUE";

    // 문자를 가운데에 삽입했다고 가정하는 경우
    if (_U.substr(0, _N / 2) == _U.substr(_N / 2 + 1, _N / 2)) return _U.substr(0, _N / 2);
    
    // 문자를 왼쪽에 삽입했다고 가정하는 경우 (왼쪽이 N / 2 + 1개, 오른쪽은 N / 2개)
    if (_U[_N / 2] == _U[_N - 1]) {
        int diff = 0;
        for (int i = 0; i < _N / 2;) {
            if (_U[i + diff] != _U[_N / 2 + 1 + i]) diff++;
            else i++;
            if (diff >= 2) return "NOT POSSIBLE";
        }
        return _U.substr(_N / 2 + 1, _N / 2);
    }

    // 문자를 오른쪽에 삽입했다고 가정하는 경우 (왼쪽이 N / 2개, 오른쪽은 N / 2 + 1개)
    else if (_U[_N / 2] == _U[0]) {
        int diff = 0;
        for (int i = 0; i < _N / 2;) {
            if (_U[i] != _U[_N / 2 + i + diff]) diff++;
            else i++;
            if (diff >= 2) return "NOT POSSIBLE";
        }
        return _U.substr(0, _N / 2);
    }

    else return "NOT POSSIBLE";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    string U; cin >> U;
    cout << solve(N, U);

    return 0;
}

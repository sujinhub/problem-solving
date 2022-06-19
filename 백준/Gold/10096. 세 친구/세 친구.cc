#include <iostream>
#include <string>
using namespace std;

string solve(int _N, string _U) {
    // 문자열의 길이가 짝수면 U를 만들 수 없는 경우
    if (!(_N & 1)) return "NOT POSSIBLE";

    string left = _U.substr(0, _N / 2);
    string right = _U.substr(_N / 2 + 1, _N / 2);

    // U를 만들 수 있는 문자열 S가 유일하지 않는 경우
    if ((left == _U.substr(_N / 2, _N / 2))
        && (_U.substr(1, _N / 2) == right)
        && (left != _U.substr(1, _N / 2))) return "NOT UNIQUE";

    // 문자를 가운데에 삽입했다고 가정하는 경우
    if (left == right) return left;
    
    // 문자를 왼쪽에 삽입했다고 가정하는 경우
    if (_U[_N / 2] == _U[_N - 1]) {
        int diff = 0;
        for (int i = 0; i < _N / 2;) {
            if (_U[i + diff] != _U[_N / 2 + 1 + i]) diff++;
            else i++;
            if (diff >= 2) return "NOT POSSIBLE";
        }
        return right;
    }

    // 문자를 오른쪽에 삽입했다고 가정하는 경우
    else if (_U[_N / 2] == _U[0]) {
        int diff = 0;
        for (int i = 0; i < _N / 2;) {
            if (_U[i] != _U[_N / 2 + i + diff]) diff++;
            else i++;
            if (diff >= 2) return "NOT POSSIBLE";
        }
        return left;
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

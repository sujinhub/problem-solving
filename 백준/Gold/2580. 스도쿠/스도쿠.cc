#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int map[9][9];
int ans[9][9];
vector<pair<int, int>> v;

bool check(int _r, int _c, int n) {
    for (int r = 0; r < 9; r++) if (map[r][_c] == n) return false; // check row
    for (int c = 0; c < 9; c++) if (map[_r][c] == n) return false; // check col

    for (int r = _r / 3 * 3; r < _r / 3 * 3 + 3; r++) {
        for (int c = _c / 3 * 3; c < _c / 3 * 3 + 3; c++) {
            if (map[r][c] == n) return false; // check square
        }
    }

    return true;
}

bool flag;

void DFS(int depth) {
    if (flag) return;

    if (depth == v.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                ans[i][j] = map[i][j];
            }
        }
        flag = true;
        return;
    }

    int r = v[depth].first, c = v[depth].second;
    for (int n = 1; n <= 9; n++) {
        if (check(r, c, n)) {
            map[r][c] = n;
            DFS(depth + 1);
            map[r][c] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            cin >> map[r][c];
            if (!map[r][c]) v.push_back({ r,c });
        }
    }

    DFS(0);

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) cout << ans[r][c] << ' ';
        cout << '\n';
    }
  

    return 0;
}
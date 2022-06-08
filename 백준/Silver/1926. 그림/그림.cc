#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    queue<pair<int, int>> q;
    vector<vector<int>> paper(n, vector<int>(m, 0)),
                        visited(n, vector<int>(m, 0)),
                        dir = { {0,1}, {0,-1}, {1,0}, {-1,0} };

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> paper[i][j];

    int area = 0;
    int ans = 0;
    int picture = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (paper[i][j] && !visited[i][j]) {
                visited[i][j] = 1;
                q.push({ i,j });
                picture++;
                area = 1;
            }

            while (!q.empty()) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                for (auto& i : dir) {
                    int nr = r + i[0]; int nc = c + i[1];
                    if (nr < 0 || nc < 0 || nr == n || nc == m || 
                        visited[nr][nc] || !paper[nr][nc]) continue;
                    visited[nr][nc] = 1;
                    q.push({ nr,nc });
                    area++;
                }
            }

            if (area > ans) ans = area;
        }
    }

    cout << picture << '\n' << ans;
    return 0;
}
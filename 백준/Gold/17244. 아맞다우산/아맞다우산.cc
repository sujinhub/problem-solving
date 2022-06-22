#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };
struct space { int y, x, bits, dist; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M; cin >> N >> M;
    vector<vector<char>> map(M, vector<char>(N));
    vector<vector<vector<bool>>> visited(M, vector<vector<bool>>(N, vector<bool>(1 << 5, 0)));
    
    queue<space> q;
    char idx = '0';

    for (int i = 0; i < M; i++) for (int j = 0; j < N; j++) {
        cin >> map[i][j];
        if (map[i][j] == 'S') {
            visited[i][j][0] = true;
            q.push({ i,j,0,0 });
        }
        else if (map[i][j] == 'X') map[i][j] = ++idx;
    }
   

    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            space s = q.front(); q.pop();

            if (map[s.y][s.x] == 'E' && s.bits == (1 << (idx - '0')) - 1) {
                cout << s.dist;
                return 0;
            }

            for (int i = 0; i < 4; i++) {
                int ny = s.y + dy[i], nx = s.x + dx[i];
                if (ny < 0 || ny >= M || nx < 0 || nx >= N || map[ny][nx] == '#') continue;

                if (map[ny][nx] >= '1' && map[ny][nx] <= idx) {
                    int bmsk = s.bits | (1 << (map[ny][nx] - '0' - 1));

                    if (!visited[ny][nx][bmsk]) {
                        visited[ny][nx][bmsk] = true;
                        q.push({ ny,nx,bmsk,s.dist + 1 });
                    }
                }

                else {
                    if (!visited[ny][nx][s.bits]) {
                        visited[ny][nx][s.bits] = true;
                        q.push({ ny,nx,s.bits,s.dist + 1 });
                    }
                }
            }
        }
    }

    return 0;
}

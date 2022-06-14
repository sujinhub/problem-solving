#include <string>
#include <vector>
#include <stack>
#include <tuple>

using namespace std;

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer(2, 0);
    stack<tuple<int, int, int>> s;

    s.push({0, 0, arr.size()});

    while (!s.empty()) {
        int x = get<0>(s.top());
        int y = get<1>(s.top());
        int sz = get<2>(s.top());
        s.pop();

        bool isZero = true, isOne = true;
        for (int i = x; i < x + sz; i++) {
            for (int j = y; j < y + sz; j++) {
                if (arr[i][j]) isZero = false;
                else isOne = false;
            }
        }

        if (isZero) {
            answer[0]++;
            continue;
        }

        if (isOne) {
            answer[1]++;
            continue;
        }

        s.push({x, y, sz / 2});
        s.push({x, y + sz / 2, sz / 2});
        s.push({x + sz / 2, y, sz / 2});
        s.push({x + sz / 2, y + sz / 2, sz / 2});
    }

    return answer;
}
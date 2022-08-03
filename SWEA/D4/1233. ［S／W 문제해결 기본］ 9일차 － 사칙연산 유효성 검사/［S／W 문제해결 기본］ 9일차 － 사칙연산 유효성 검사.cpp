#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for (int test_case = 1; test_case <= 10; test_case++) {
        int cur, left, right, ans = 1;
        char opr;
        int N;  cin >> N;

        for (int i = 1; i <= N; i++) {
            cin >> cur >> opr;
            if (2 * i <= N) { // 자식 노드가 하나라도 있는 경우
                cin >> left;
                if (2 * i + 1 <= N) cin >> right;
                if (opr >= '0' && opr <= '9') ans = 0;
            }
            else { // 자식 노드가 하나도 없는 경우
                if (!(opr >= '0' && opr <= '9')) ans = 0;
            }
        }
        cout << '#' << test_case << ' ' << ans << '\n';
    }

    return 0;
}
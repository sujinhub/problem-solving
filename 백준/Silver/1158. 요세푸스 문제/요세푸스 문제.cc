#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    int N, K;
    queue<int> q;
    string str = "<";
    cin >> N >> K;
    cout << "<";

    for (int i = 1; i <= N; i++) q.push(i);

    while (q.size() - 1) {
        for (int i = 1; i < K; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << ">\n";
	return 0;
}

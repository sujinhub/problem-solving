#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int X, N; cin >> N;
	queue<int> queue;
	string cmd;
	for (; N--;) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> X;
			queue.push(X);
		}
		else if (cmd == "pop") {
			if (queue.empty()) cout << "-1\n";
			else {
				cout << queue.front() << '\n';
				queue.pop();
			}
		}
		else if (cmd == "size") {
			cout << queue.size() << '\n';
		}
		else if (cmd == "empty") {
			if (queue.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (cmd == "front") {
			if (queue.empty()) cout << "-1\n";
			else cout << queue.front() << '\n';
		}
		else if (cmd == "back") {
			if (queue.empty()) cout << "-1\n";
			else cout << queue.back() << '\n';
		}
	}
	return 0;
}
#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int X, N; cin >> N;
	deque<int> dq;
	string cmd;

	for (; N--;) {
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> X;
			dq.push_front(X);
		}
		else if (cmd == "push_back") {
			cin >> X;
			dq.push_back(X);
		}
		else if (cmd == "pop_front") {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << dq.size() << '\n';
		}
		else if (cmd == "empty") {
			if (dq.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (cmd == "front") {
			if (dq.empty()) cout << "-1\n";
			else cout << dq.front() << '\n';
		}
		else if (cmd == "back") {
			if (dq.empty()) cout << "-1\n";
			else cout << dq.back() << '\n';
		}
	}
	return 0;
}
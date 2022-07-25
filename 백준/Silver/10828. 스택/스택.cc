#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string cmd;

	int stack[10001];
	int stack_size = -1;
	int X, ret;

	for (; N--;) {
		cin >> cmd;
		
		if (cmd == "push") {
			cin >> X;
			stack[++stack_size] = X;
		}
		else if (cmd == "pop") {
			ret = stack_size != -1 ? stack[stack_size--] : -1;
		}
		else if (cmd == "size") {
			ret = stack_size + 1;
		}
		else if (cmd == "empty") {
			ret = stack_size == -1 ? 1 : 0;
		}
		else if (cmd == "top") {
			ret = stack_size != -1 ? stack[stack_size] : -1;
		}

		if (cmd != "push") cout << ret << '\n';
	}

	return 0;
}
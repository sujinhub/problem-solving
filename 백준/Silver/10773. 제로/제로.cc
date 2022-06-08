#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K; cin >> K;
	int N, sum = 0;
	stack<int> stack;

	for (; K--;) {
		cin >> N;
		if (!N) stack.pop();
		else stack.push(N);
	}

	while (!stack.empty()) {
		sum += stack.top();
		stack.pop();
	}

	cout << sum;

	return 0;
}
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());


	string long_str, short_str;
	if (A.size() >= B.size()) {
		long_str = A;
		short_str = B;
	}
	else {
		long_str = B;
		short_str = A;
	}

	stack<int> stack;
	int carry = 0;
	for (int i = 0; i < long_str.length(); i++) {
		int sum;
		if (i < short_str.length()) sum = long_str[i] + short_str[i] - '0' * 2;
		else sum = long_str[i] - '0';
		if (carry) {
			sum++;
			carry = 0;
		}
		if (sum >= 10) {
			sum %= 10;
			carry = 1;
		}
		stack.push(sum);
	}

	if (carry) stack.push(1);
	
	while (!stack.empty()) {
		cout << stack.top();
		stack.pop();
	}

	return 0;
}
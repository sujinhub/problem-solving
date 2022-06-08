#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N; cin >> N;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		stack<char> stack1, stack2;
		string word; cin >> word;
		if (word.length() % 2) continue;
		for (int j = 0; j < word.size(); j++) stack1.push(word[j]);

		char prev = ' ', cur = ' ';
		while (!stack1.empty()) {
			cur = stack1.top(); stack1.pop();
			if (prev == cur) stack2.pop();
			else stack2.push(cur);
			if (stack2.empty()) prev = ' ';
			else prev = stack2.top();
		}
		
		if (stack2.empty()) ans++;
	}

	cout << ans;
	return 0;
}
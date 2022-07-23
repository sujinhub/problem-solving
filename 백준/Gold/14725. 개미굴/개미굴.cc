#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

struct NODE {
	map<string, NODE> child;
};

void solve(NODE& p, vector<string> v, int idx) {
	if (idx == v.size()) return;
	if (!p.child.count(v[idx])) p.child[v[idx]] = NODE();
	solve(p.child[v[idx]], v, idx + 1);
}

void print(NODE& p, int depth = 0) {
	for (auto node : p.child) {
		for (int i = 0; i < depth; i++) cout << "--";
		cout << node.first << endl;
		print(node.second, depth + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	NODE root;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int K; cin >> K;
		vector<string> v(K);
		for (int j = 0; j < K; j++) cin >> v[j];
		solve(root, v, 0);
	}
	print(root);

	return 0;
}
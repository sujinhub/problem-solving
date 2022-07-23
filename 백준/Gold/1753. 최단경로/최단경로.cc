#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 20001
#define INF 99999999

vector<int> dijkstra(int start, int V, vector<pair<int, int>> adj[]) {
	vector<int> dist(V + 1, INF);
	priority_queue<pair<int, int>> pq;

	dist[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty()) {
		int weight = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (dist[cur] < weight) continue;

		for (int i = 0; i < adj[cur].size(); i++) {
			int next_vertex = adj[cur][i].first;
			int temp_dist = weight + adj[cur][i].second;
			if (temp_dist < dist[next_vertex]) {
				dist[next_vertex] = temp_dist;
				pq.push(make_pair(-temp_dist, next_vertex));
			}
		}
	}

	return dist;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int V, E, K; cin >> V >> E >> K;
	vector<pair<int, int>> adj[MAX];

	for (int i = 0; i < E; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[from].push_back({ to, cost });
	}
	
	vector<int> dist = dijkstra(K, V, adj);
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF) cout << "INF\n";
		else cout << dist[i] << '\n';
	}


	return 0;
}
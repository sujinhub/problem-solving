#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>,greater<int>> scoville_pq;
    for (auto& s : scoville)
        scoville_pq.push(s);
    int s1 = scoville_pq.top();
    while (scoville_pq.top() < K)
    {
        if (scoville_pq.size() == 1 && scoville_pq.top() < K)
            return -1;
        int scoville_data_1st = scoville_pq.top();
        scoville_pq.pop();
        int scoville_data_2nd = scoville_pq.top();
        scoville_pq.pop();
        scoville_pq.push(scoville_data_1st + scoville_data_2nd * 2);
        answer++;
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> one = { 1,2,3,4,5 };
    vector<int> two = { 2,1,2,3,2,4,2,5 };
    vector<int> three = { 3,3,1,1,2,2,4,4,5,5};

    vector<int> ans;
    vector<int> score(3,0);

    for (int i = 0; i < answers.size(); i++){
        if (one[i % 5] == answers[i]) score[0]++;
        if (two[i % 8] == answers[i]) score[1]++;
        if (three[i % 10] == answers[i]) score[2]++;
    }

    int max = *max_element(score.begin(), score.end());

    for (int i=0; i<3; i++){
        if (score[i] == max) ans.push_back(i+1);
    }

    return ans;
}
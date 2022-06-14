#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> v;
    istringstream ss(s);
    string num;

    while (getline(ss, num, ' ')) v.push_back(stoi(num));
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    string answer = to_string(mn) + ' ' + to_string(mx);
    return answer;
}
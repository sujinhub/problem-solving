#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    string tmpA = to_string(a);
    string tmpB = to_string(b);
    return tmpA + tmpB > tmpB + tmpA;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), cmp); 
    if (!numbers[0]) answer = '0';
    else {
        for (int i=0; i<numbers.size(); i++)
           answer += to_string(numbers[i]);
    }
    return answer;
}
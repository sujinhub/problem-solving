#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long temp = num;
    int cnt = 0;
    while (temp != 1) {
        if (++cnt == 500) return -1;
        temp = (temp % 2) ? temp * 3 + 1 : temp / 2;
    }
    return cnt;
}
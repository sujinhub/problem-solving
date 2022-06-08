#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int number, N; cin >> N;
    vector<int> numbers;

    for (; N--;) {
       cin >> number;
       numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    for (auto& i : numbers)
        cout << i << "\n";
}
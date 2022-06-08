#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		double total_credit = 0, total_grade = 0;
		while (N--) {
			double C, G; cin >> C >> G;
			total_credit += C;
			total_grade += G * C;
		}
		cout << total_credit << ' ' << total_grade / total_credit << '\n';;
	}
}
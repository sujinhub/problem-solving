#include <iostream>
using namespace std;

int main() {
	long long X1, Y1, R1; cin >> X1 >> Y1 >> R1;
	long long X2, Y2, R2; cin >> X2 >> Y2 >> R2;
	long long square_of_dist = (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2);

	/* 외부에 있거나 외접하는 만나는 경우에는 겹치지 않는다. */
	if (square_of_dist >= (R1 + R2) * (R1 + R2))
		cout << "NO";
	/* 그외에는 전부 겹친다. */
	else
		cout << "YES";

	return 0;
}
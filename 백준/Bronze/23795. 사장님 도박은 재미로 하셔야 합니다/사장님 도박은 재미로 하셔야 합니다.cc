#include<iostream>
using namespace std;

int main() {
	int money, sum = 0;
	do {
		cin >> money;
		sum += money;
	} while (money != -1);
	cout << sum + 1;
	return 0;
}
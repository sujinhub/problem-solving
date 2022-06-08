#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	string oldest_name;
	int oldest_day = 31;
	int oldest_month = 12;
	int oldest_year = 2010;

	string youngest_name;
	int youngest_day = 1;
	int youngest_month = 1;
	int youngest_year = 1990;

	while (n--) {
		string name; int day, month, year;
		cin >> name >> day >> month >> year;

		if (oldest_year > year) {
			oldest_name = name;
			oldest_day = day;
			oldest_month = month;
			oldest_year = year;
		}
		else if (oldest_year == year) {
			if (oldest_month > month) {
				oldest_name = name;
				oldest_day = day;
				oldest_month = month;
				oldest_year = year;
			}
			else if (oldest_month == month) {
				if (oldest_day > day) {
					oldest_name = name;
					oldest_day = day;
					oldest_month = month;
					oldest_year = year;
				}
			}
		}

		if (youngest_year < year) {
			youngest_name = name;
			youngest_day = day;
			youngest_month = month;
			youngest_year = year;
		}
		else if (youngest_year == year) {
			if (youngest_month < month) {
				youngest_name = name;
				youngest_day = day;
				youngest_month = month;
				youngest_year = year;
			}
			else if (youngest_month == month) {
				if (youngest_day < day) {
					youngest_name = name;
					youngest_day = day;
					youngest_month = month;
					youngest_year = year;
				}
			}
		}
	}

	cout << youngest_name << '\n' << oldest_name;
	return 0;
}
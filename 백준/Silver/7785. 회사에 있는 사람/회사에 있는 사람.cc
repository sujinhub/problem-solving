#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	string name, status;
	map<string, bool> system;
	map<string, bool>::reverse_iterator ri;


	for (cin >> n; n--;) {
		cin >> name >> status;
		if (status == "enter") system[name] = true;
		else if (status == "leave") system[name] = false;
	}

	for (ri = system.rbegin(); ri != system.rend(); ri++) {
		if (ri->second == true) cout << ri->first << '\n';
	}

	return 0;
}
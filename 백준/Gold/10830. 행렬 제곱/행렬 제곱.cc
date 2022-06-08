#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; long long B;
	cin >> N >> B;
	
	vector <vector<int>> input(N, vector<int>(N, 0));
	vector <vector<int>> output(N, vector<int>(N, 0));
	vector <vector<int>> temp(N, vector<int>(N, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input[i][j];
		}
		output[i][i] = 1;
	}

	while (B) {
		if (B & 1) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					temp[i][j] = 0;
					for (int k = 0; k < N; k++) {
						temp[i][j] += output[i][k] * input[k][j];
					}
					temp[i][j] %= 1000;
				}
			}
			output.assign(temp.begin(), temp.end());
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				temp[i][j] = 0;
				for (int k = 0; k < N; k++) {
					temp[i][j] += input[i][k] * input[k][j];
				}
				temp[i][j] %= 1000;
			}
		}

		B /= 2;
		input.assign(temp.begin(), temp.end());
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << output[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}
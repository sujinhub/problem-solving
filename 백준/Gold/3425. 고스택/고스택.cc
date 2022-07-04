#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> cmd_vec;
    vector<int> num_vec;

    while (1) {
        cmd_vec.clear();
        num_vec.clear();
        bool error_flag = false;

        string cmd; cin >> cmd;
        cmd_vec.push_back(cmd);
        if (cmd == "QUIT") break;

        while (cmd_vec[0] != "END") {
            cin >> cmd;
            if (cmd == "END") break;
            cmd_vec.push_back(cmd);
        }

        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int input; cin >> input;
            num_vec.push_back(input);
        }

        for (int j = 0; j < n; j++) {
            error_flag = false;
            stack<long long> s;
            s.push(num_vec[j]);

            for (int i = 0; i < cmd_vec.size(); i++) {
                if (cmd_vec[i] == "NUM") {
                    s.push(stoi(cmd_vec[i + 1]));
                    i++;
                }
                else if (cmd_vec[i] == "POP") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.pop();
                }
                else if (cmd_vec[i] == "INV") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int first = -s.top(); s.pop();
                    s.push(first);
                }
                else if (cmd_vec[i] == "DUP") {
                    s.push(s.top());
                }
                else if (cmd_vec[i] == "SWP") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int second = s.top(); s.pop();
                    s.push(first);
                    s.push(second);
                }
                else if (cmd_vec[i] == "ADD") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long second = s.top(); s.pop();
                    if (abs(first + second) > 1000000000) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.push(first + second);
                }
                else if (cmd_vec[i] == "SUB") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long second = s.top(); s.pop();
                    if (abs(second - first) > 1000000000) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.push(second - first);
                }
                else if (cmd_vec[i] == "MUL") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    long long second = s.top(); s.pop();
                    if (abs(first * second) > 1000000000) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.push(first * second);
                }
                else if (cmd_vec[i] == "DIV") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int second = s.top(); s.pop();
                    if (first == 0) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.push(second / first);
                }
                else if (cmd_vec[i] == "MOD") {
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int first = s.top(); s.pop();
                    if (s.empty()) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    int second = s.top(); s.pop();
                    if (first == 0) {
                        cout << "ERROR\n";
                        error_flag = true;
                        break;
                    }
                    s.push(second % first);
                }
            }
            if (error_flag == false) {
                if (s.size() == 1) cout << s.top() << "\n";
                else cout << "ERROR\n";
            }

        }
        cout << "\n";
    }

    return 0;
}
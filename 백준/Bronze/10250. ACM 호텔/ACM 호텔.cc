#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    
    while (T--) {
        int H, W, N; cin >> H >> W >> N;
        int floor = N % H ? N % H : H;
        int num = N % H ? N / H + 1 : N / H;

        cout << floor;
        if (!(num / 10)) cout << 0;
        cout << num << endl;
    }

    return 0;
}
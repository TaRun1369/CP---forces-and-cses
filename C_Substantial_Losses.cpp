#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int W, G, L;
        cin >> W >> G >> L;

        int curWeight = W;
        long long days = 0;

        while (curWeight < G) {
            double probGain = 0.5; // Equal likelihood of gaining or losing weight
            if (curWeight + 1 <= W + L) {
                curWeight++;
            } else {
                curWeight--;
            }
            days++;
        }

        // Calculate the answer (average days)
        long long answer = (days / 2) % 998244353;

        cout << "Case #" << T + 1 << ": " << answer << endl;
    }

    return 0;
}

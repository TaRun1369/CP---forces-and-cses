#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> prices(n);
        for (long long i = 0; i < n; ++i) {
            cin >> prices[i];
        }

        long long segments = 1;
        unordered_map<long long, long long> freq;

        for (long long i = 0; i < n; ++i) {
            if (x % prices[i] == 0 && freq[x / prices[i]] > 0) {
                segments++;
                freq.clear();
            }
            freq[prices[i]]++;
        }

        cout << segments << endl;
    }

    return 0;
}

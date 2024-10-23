#include<bits/stdc++.h>

using namespace std;

long long sum;
set<long long> ans;
bool found = false;  // To track if the solution is found

void func(long long n, long long curr) {
    if (found) return;  // Stop further recursion if solution is found
    
    if (curr * 2 == sum) {  // Base case: found a valid subset
        found = true;
        return;
    }
    if (n == 0) return;  // Base case: no more elements to consider

    // "Take" case: Include n in the subset if it doesn't exceed half of the total sum
    if (curr + n <= sum / 2) {
        ans.insert(n);
        func(n - 1, curr + n);
        if (found) return;  // Stop further recursion if solution is found
        ans.erase(n);  // Backtrack
    }
    
    // "Not take" case: Skip n and proceed
    func(n - 1, curr);
}

long long main() {
    long long n;
    cin >> n;

    sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        func(n, 0);
        if (found) {
            cout << "YES" << endl;
            cout << ans.size() << endl;
            for (auto it : ans) {
                cout << it << " ";
            }
            cout << endl;
            cout << n - ans.size() << endl;
            for (long long i = 1; i <= n; i++) {
                if (ans.find(i) == ans.end()) {
                    cout << i << " ";
                }
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

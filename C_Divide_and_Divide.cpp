// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 
//  long recur(long n){
//     if(n == 1 || n == 0) return 0;

//     if(n%2 == 0){
//         return n + 2*recur(n/2)*1LL;
//     }
//     else{
//         return n + recur(n/2) + recur(n/2+1);
//     }
//  }
 
// long long main() {
    

//     long n;
//     cin>>n;
//     cout<<recur(n)<<endl;

// }



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unsigned long long recur(unsigned long long n,map<unsigned long long, unsigned long long> &memo) {
    if (n == 1 || n == 0) return 0;
    if(memo.count(n)>0) return memo[n];
    if (n % 2 == 0) {
        return memo[n] = n + 2 * recur(n / 2,memo);
    } else {
        return memo[n] = n + recur(n / 2,memo) + recur(n / 2 + 1,memo);
    }
}

long long main() {
    unsigned long long n;
    map<unsigned long long, unsigned long long> memo;
    cin >> n;
    cout << recur(n,memo) << endl;
    return 0;
}

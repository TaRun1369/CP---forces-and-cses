#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
  
void solve() {
    long long a,b;
    cin>>a>>b;
    if((a %2 == 0 && b % 2 != 0) || (a%2 != 0 && b%2 == 0)){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}

long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        
        solve();
 
    }
    return 0;
}

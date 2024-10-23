#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
  
void solve() {
    long long n;
    cin>>n;
    long long cm = 0,cp = 0;
    for(long long i =0;i<n;i++){
        char c;
        cin>>c;
        if(c == '-'){
            cm++;
            }
            else{
                cp++;
            }

    }
    long long mini = min(cm,cp);
    cout<<n - 2*mini<<endl;
    
}

long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        
        solve();
 
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 

  
void solve() {
    long long n;
    cin>>n;
    // if(n == 1) {cout<<0<<endl;return;}
    long long ans = 0;
    // long long prev1 = n+1;
    // long long prev2 = n+1;

    // for(long long i = 0 ;i<n;i++){
    //     long long a;
    //     cin>>a;
    //     long long maxi = max(prev1,prev2);
    //     long long mini = min(prev1,prev2);
    //     if(a > maxi){
    //         ans++;
    //         if(mini == prev1){
    //             prev1 = a;
    //         }
    //         else{
    //             prev2 = a;
    //         }
    //     }
    //     else if(a <= mini){
    //         if(mini == prev1){
    //             prev1 = a;
    //         }
    //         else{
    //             prev2 = a;
    //         }
    //     }
    //     else{
    //         if(mini == prev1){
    //             prev2 = a;
    //         }
    //         else{
    //             prev1 = a;
    //         }
            
    //     }

    // }
    long long x;
    cin>>x;
        long long y = n+1;
    for(long long i = 1;i<n;i++){
        long long a;
        cin>>a;
        if(a<= x){
            x =a;
            continue;
        }
        else if(a <= y){
            y = a;
            
        }
        else{
            ans++;
            x = a;
        }
    } 
    // if(ans == 0){
    //     cout<<0<<endl;
    //     return;
    // }
    // else 
    cout<<ans<<endl;
  
    
}

long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        
        solve();
 
    }
    return 0;
}

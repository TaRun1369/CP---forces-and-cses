#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
  
void solve() {
    long long n;
    cin>>n;
    long long maxi = 1;
    long long flag = 1; // 1 for inc && 0 for dec
    long long prev ;
    long long flip = 0;
    if(n == 1 || n == 2){
        maxi = 1;
    }
    else{
        maxi = (n-1) + (n-2);
    }
    long long sum = 0;
    for(long long i = 0;i<n;i++){
        long long a;
        cin>>a;
        long long tflag =flag;
        if(a> prev){
            flag = 1;
        }
        else{
            flag = 0;
        }
        sum += a;
        if(i!= 0 && tflag != flag){
            flip++;
        }
        prev = a;

        
    }

    if(sum <= maxi){
        if(flip <=  2)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    else cout<<"NO"<<endl;
  
    
}

long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        
        solve();
 
    }
    return 0;
}

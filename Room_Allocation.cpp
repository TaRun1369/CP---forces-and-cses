#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    long long ans = 0;
    for(long long i = 0;i<a;i++){
        long long x;
        cin>>x;
        ans += x/2;
        ans += x%2;
    }
    cout<<ans<<endl;
   }
}

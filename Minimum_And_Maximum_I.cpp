#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    long long s;
    if(a % 2 != 0)
     s = a/2 + 1;
    else s = a/2;
    long long ans = s*(s+1);
    if(a%2 != 0)
    ans -= (a/2+1);
    // else{
    //     ans *= 2;
    // }
    cout<<ans<<endl;
   }

}

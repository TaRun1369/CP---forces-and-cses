#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
//   #define indd long long
//  #define long long64_t long long

 
long long main() {
    

   long long n,k;
   cin>>n>>k;
   if(k > ceil(double((double)n/(double)2)) ){
    long long ans = 0;
    long long tk = k;
    // k -= ceil(n/2);
    // cout<<"k "<<k<<endl;
    k-=ceil(double((double)n/(double)2));
    // for(long long i = 1;i<=tk;i++){
    //     k--;
    //     ans += 2;
    //     if(k == 0){
            
    //         return 0;
    //     }
    // }
    cout << ans + 2*k<<endl;
   }
   else{
     long long ans = -1;
     long long tk = k;
    // for(long long i = 1;i<=tk;i++){
    //    k--;
    //    ans += 2;
    //    if(k == 0){
    //     cout<<ans<<endl;
    //     return 0;
    //    }

    // }
    cout<<ans + 2*tk<<endl;
   }
}



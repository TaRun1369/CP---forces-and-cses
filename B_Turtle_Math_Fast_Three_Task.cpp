#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    vector<long long> v(a);
    long long ans = 0,mini = long long_MAX;
    for(long long i = 0;i<a;i++){
        // long long x;
        cin>>v[i];
        ans +=abs(v[i]);
    }
    if(ans % 3 == 0) {
        cout<<0<<endl;
        continue;
    }

    long long div = ans / 3;
    long long rem = ans % 3;
    mini = min(mini,(div + 1)* 3 - ans);

    for(auto it : v){
        ans -= it;
        if(ans%3 == 0) mini = min(mini,1);
        ans += it;
    }

   cout<<mini<<endl;




    }
    
   }




long long countDivisors(long long n) 
{ 
    long long cnt = 0; 
    for (long long i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
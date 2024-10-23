#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long countDivisors(long long n,long long a,long long b) 
{ 
    long long cnt = 0; 
    for (long long i = 1; i <= n; i++) { 

        // if (n % i == 0 && (i % a*b == 0) && ((n/i) % a*b == 0)) { 
        //     // If divisors are equal, 
        //     // count only one 
        //     if (n / i == i) 
        //         cnt++; 
  
        //     else // Otherwise count both 
        //         cnt = cnt + 2; 
        // } 

        if(n % i == 0 && (i % a == 0 || i % b == 0)) cnt++;
        // if(n/i != i && (n/i % a == 0 || (n/i) % b == 0)) cnt++;
    } 
    return cnt; 
} 

long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a,b,l;
    cin>>a>>b>>l;
    cout<<countDivisors(l,a,b) + 1<<endl; 
    }
    
   }

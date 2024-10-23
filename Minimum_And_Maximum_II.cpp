#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    long long sum = 0;
    sum += (a*(a+1)/2);
     sum += a;
     sum -= 1;
     cout<<sum<<endl;
   }

}



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

long long main() {
    

   long long n;
   cin>>n;
 
   while(n--){
    long long a,b;
    unsigned long long prod = 1;
    cin>>a>>b;
    vector<long long> ip(a);
    for(long long i=0;i<a;i++){
        cin>>ip[i];
        // if(ip[i] % b != 0)
        // ip[i]%=b;
        // ne[i] = ip[i];
        prod*=ip[i];
      
    }
    
    vector<char> v(a);
    for(long long i=0;i<a;i++){
        cin>>v[i];
    }
    long long l = 0,r = a-1;
    for(long long i=0;i<a;i++){
        if(v[i] == 'L'){
            cout<<prod%b<<" ";
            prod/=ip[l];
            l++;
        }
        else{
            cout<<prod%b<<" ";
            prod/=ip[r];
            r--;
        }
    }
    cout<<endl;

   }

}



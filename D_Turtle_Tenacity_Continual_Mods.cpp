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
    long long countone = 0;
    for(long long i =0;i<a;i++){ cin>>v[i];
    if(v[i]==1) 
    {
        countone++;
    }
    }
    if(countone == 1) {cout<<"YES"<<endl; continue;}
    if(countone > 1) {cout<<"NO"<<endl; continue;}
    sort(v.rbegin(),v.rend());
    bool one = false;
    for(long long i =1;i<a;i++){
        // cout<<"ele "<<v[i-1] << " "<<v[i]<<endl;
        if(v[i-1] % v[i] == 1){ 
            // cout<<"ele "<<v[i-1] << " "<<v[i]<<endl;
            one = true;break;}

    }

    if(one == true) cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    }
    
   }

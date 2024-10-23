#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long t,a,flag = 1;
    cin>>t;
    vector<long long> v(t),hash(t+1,0),hashend(t+1,0);
    if(t % 2 == 0) a = t/2;
    else a = t/2 ;
    for(long long i = 0;i<t;i++){
        cin>>v[i];
        if(i < a)
        hash[v[i]]++;
        else hashend[v[i]]++;
    }
    // cout<<"a - "<<a<<endl;
    for(long long i = 0;i<a;i++){
        // cout<<"i = "<<i<<endl;
        // cout<<"hash - "<<hash[i]<<" "<<"hashend - "<<hashend[i]<<endl;
        if(hash[i] > 0){
            if(hashend[i] == 0)
            {flag = 0; break;}
        }
        else if(hashend [i] > 0){
            if(hash[i] == 0)
            {flag = 0; break;}
        }
        else{
            flag  = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<2<<endl;
        cout<<1<<" "<<a<<endl;
        cout<<a + 1<<" "<<t<<endl;
    }
    else cout<<-1<<endl;



    
   }

}

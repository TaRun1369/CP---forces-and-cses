#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
 
long long main() {
    

    long long n;
    cin>>n;
    vector<long long> v;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a == 1){
            v.push_back(b);
        }
        else{
            cout<<v[v.size() - b]<<endl;
        }
    }


}



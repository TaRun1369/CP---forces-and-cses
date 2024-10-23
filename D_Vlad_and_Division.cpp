

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long findComplement(long long n) {
   long long bit_count = floor(log2(n))+1;
   long long ones = ((1 << bit_count) - 1);
   return ones ^ n;
}

long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    vector<long long> v(a);
    for(long long i = 0;i<a;i++){
        cin>>v[i];
    }
    set<long long> s;
    long long ans = 0;
    long long oness = (pow(2,31) - 1);
    for(long long i = 0;i<a;i++){
        cout<<"curr ele "<<v[i]<<endl;
        for(auto it : s) cout<<it<<" set ka banda  ";
        cout<<endl;
        if(s.find(v[i]) != s.end()){
            s.erase(v[i]);
            continue;
        }
        else{
            ans++;
            long long cal = oness^v[i];
            s.insert(cal); 
            cout<<cal<<"   -  ";
            cout<<endl;
            
        }
    }
    cout<<ans<<endl;

   }

}

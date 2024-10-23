

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
long long recur(vector<char> &v,long long i){
    if(i == v.size() - 1){
        if(v[i] == '@') return 1;
        return 0;
    }
    if(v[i] == '*') return 0;
    long long one = recur(v,i+1);
    long long two = long long_MIN;
    if(i < v.size()-2){
        two = recur(v,i+2);
    }
    long long buff = 0;
    if(v[i] == '@'){
        buff = 1;
    }

    return max(one,two) + buff;
}
long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    vector<char> v(a);
    for(long long i=0;i<a;i++){
        cin>>v[i];
    }
    
    cout<<recur(v,0)<<endl;
   }

}



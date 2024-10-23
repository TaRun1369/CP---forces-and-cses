

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
    string a;
    cin>>a;
    long long A = 0,B = 0;
    for(auto it : a){
        if(it == 'A') A++;
        else if(it == 'B') B++;
    }
    if(A > B){
        cout<<"A"<<endl;
    }
    else if(B > A){
        cout<<"B"<<endl;
    }
   }

}



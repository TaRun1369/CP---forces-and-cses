#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a,b,c;
    cin>>a>>b>>c;
    
    if(b >= a){
        cout<<"Alice"<<endl;
    }
    else if(c >= a) {
        cout<<"Bob"<<endl;
    }
    else{
        a %= (b + c);
        if(a == 0){
            if(b > c) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else{
            if(b >= a){
        cout<<"Alice"<<endl;
    }
    else if(c >= a) {
        cout<<"Bob"<<endl;
    }
        }
    }
   }

}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
 
long long main() {
    

    long long n;
    cin>>n;
    
    while(n--){
        long long a,b;
        cin>>a>>b;
        if( a == b ){
            cout<<"No"<<endl;
        }
        else if(a%2 == 0 && b%2 != 0){
            if(a/2 == b) 
            cout<<"Yes"<<endl;
            else    
            cout<<"No"<<endl;
        }
        else if(a%2 != 0 && b%2 == 0){
            if(b/2 == a) 
            cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }


}



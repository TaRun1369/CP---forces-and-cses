#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        // long long flag = 0; // 0 banega 
        long long prod = 0;
        long long zero = 0; 
        for(long long i = 0;i<n;i++){
            long long a;
            cin>>a;
            if(a < 0){
                prod++;
            }
            if(a == 0) zero = 1;
        }
        if(zero == 1){
            cout<<0<<endl;
        }
        else{
        if(prod % 2 == 0 ){
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else{
            cout<<0<<endl;
        }
        }
        

       
 
    }
    return 0;
}

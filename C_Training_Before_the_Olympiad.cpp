#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        long long sum = 0;
        long long oddcount = 0;
        for(long long i = 0;i<n;i++){
            long long a;
            cin>>a;
            if(a % 2 != 0){
                oddcount++;
            }
            sum += a;
            long long threes  = oddcount/3;
            long long rem = oddcount %3;

            if(rem == 1 && i != 0){
                cout<<sum - threes - rem<<" ";
            }
            else{
                cout<<sum - threes<<" ";
            }
        }
        cout<<endl;
        

       
 
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long n;
    cin>>n;
    
    long long c = 0;
    while(n > 0){

                long long n1 = n;
                long long maxi = 0;
                while(n1 > 0){
                    maxi = max(maxi,n1%10);
                    n1 /= 10;
                }
                
                n -= maxi;
                c++;
                
    }
    cout<<c<<endl;
    // cout<<recur(n,dp)<<endl;
}




#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
       long long n,m;
       cin>>n>>m;
        long long bhuk = 0;
        long long tn = n;
        long long n2 = 0;
        tn /= pow(2,n2);
        long long n5 = log(tn)/log(5);

        cout<<"input - "<<n<<"  "<<m<<endl;
        cout<<"logs - "<<n2<<" "<<n5<<endl;
        if(n2 > n5){
            bhuk = n2 - n5;
            // cout<<bhuk<<endl;
            t = 1;
            long long tm = m;
            while(t*5 < m && bhuk > 0){
                t*=5;
                bhuk--;
                tm/=5;
            }
            while(t < tm){
                t*=10;
            }

            long long maxi = m/t;
            if(maxi  == 0 ) maxi = 1;
            cout<<n*maxi*t<<endl;


        }
        else{
            cout<<1<<endl;
        }
        
    }
    return 0;
}

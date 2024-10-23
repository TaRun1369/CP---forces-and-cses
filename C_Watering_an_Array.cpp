#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n,k,d;
        cin >> n>>k>>d;
        long long cpi = 0;
        long long maxi = 0;
        vector<long long> ip;
        for(long long i = 0;i<n;i++){
            long long a;
            cin>>a;
            ip.push_back(a);
            if(a == i+1){
                cpi++;
            }
        }
        vector<long long> v;
        for(long long i = 0;i<k;i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }

        for(long long i = 0;i<d;i++){
            long long abwalaI = i%k;
            long long abwala = v[abwalaI]; // bi

            long long first = 0,second = 0;
            first += abwala;
            second += cpi;

            long long tmax = max(first,second);
            if(tmax == second){
                cpi = 0;
                for(long long i = 0;i<n;i++){
                    ip[i] = 0;
                    if(ip[i] == i+1){
                        cpi++;
                    }
                }
            }
            else{
                long long cpi = 0;
                for(long long i = 0;i<n;i++){
                    ip[i]+=1;
                    if(ip[i] == i+1){
                        cpi++;
                    }
                }
            }

            maxi +=tmax;



        }

       
        cout<<maxi<<endl;
    }


    return 0;
}

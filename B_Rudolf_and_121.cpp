#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

long long main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        long long i = 1,j= n -2;
        long long previ = a[0], prevj = a[n-1];
        long long fl = 0;
        while(i<j && a[i] != previ && a[j] != prevj){
             previ = a[i];
            prevj = a[j];
            i++;
            j--;

        }
        if(i == j){
            fl = 1;
        }
        if(fl == 0) {
            cout<<"NO"<<endl;
            continue;
        }
    i = 0;j= n-1;
long long f = 0;
        while(i < j){
            if(a[i] < 0 || a[j] < 0) {
                cout<<"NO"<<endl;
                f = 1;
                break;
            }
            long long dif = abs(a[j] - a[i]);
            if(dif == 0){
                i++;
                j--;
            }
            else{
                long long twi = 2*dif;
                if(a[i] > a[j]){
                    a[i+1] -= twi;
                    a[i] -= dif;
                    a[i+2] -= dif;
                }
                else{
                    a[j-1] -= twi;
                    a[j] -= dif;
                    a[j-2] -= dif;
                }
            }
        }
        if(f == 0)
        cout<<"YES"<<endl;
    }
    

    return 0;
}

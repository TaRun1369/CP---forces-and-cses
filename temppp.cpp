#include<bits/stdc++.h> 
using namespace std;
long long main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i = 0;i<n;i++){
        cin>>v[i];
    }
    // 2 3 4 5
    // 1 2 4 5

    long long l = 1;
    long long h = n+1;

    while(l < h){
        long long mid = (l + h)/2;
        cout<<"m - "<<mid<<endl;

        if(mid  == v[mid -1]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    if(l != v[l-1]){
        cout<<l<<endl;
    }
    else{
        cout<<h<<endl;
    }




}
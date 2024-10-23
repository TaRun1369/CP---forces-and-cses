#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;

    vector<string> gray;
    gray.push_back("0");
    gray.push_back("1");

    for(long long i = 2;i<=n;i++){
        long long siz = gray.size();
        for(long long i = siz - 1;i>=0;i--){
            gray.push_back(gray[i]);
        }

        for(long long i= 0;i<siz;i++){
            gray[i] = "0" + gray[i];
            gray[i+siz] = "1" + gray[i + siz];
        }
    }

    for(auto it : gray){
        cout<<it<<endl;
    }
}
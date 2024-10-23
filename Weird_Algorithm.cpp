#include<bits/stdc++.h>
using namespace std;

long long n;

void fun(long long n){
    cout<<n<<" ";
    if(n == 1) return;
    if(n & 1){
        fun(n*3 + 1);
    }
    else{
        fun(n/2);
    }
}

long long main(){
    cin>>n;
    fun(n);
}
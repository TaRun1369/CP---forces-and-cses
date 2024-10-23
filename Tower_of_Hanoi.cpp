#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(long long n,long long a,long long b,long long c){
    if( n == 0) return;
    TowerOfHanoi(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    TowerOfHanoi(n-1,b,a,c);
}
long long main(){
    long long n;
    cin>>n;
    cout<<(1<<n) - 1<<endl;
    TowerOfHanoi(n,1,2,3);

}
#include<bits/stdc++.h>
using namespace std;

long long PowMod(long long long long x,long long long long n,long long long long M)
{
		    if(n<=1)
		        return x%M;
		   long long long long res;
		    res=PowMod(x,n/2,M)%M;
		    res=(res*res)%M;
		    if(n%2==1)
		        res=((res%M)*(x%M))%M;
		    return res%M;
}


long long main(){
    long long n;
    cin>>n;
    long long m = 1e9 + 7;
    cout<<PowMod(2,n,m);

    
}
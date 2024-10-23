#include<bits/stdc++.h>
using namespace std;

long long divisor(long long a){
    long long count = 0;
    for(long long i = 1;i*i <= a;i++){
        if(a%i == 0){
            long long div = a/i;
            count++;
            if(div != i){
                count++;
            }
        }
    }

    return count;
}
long long main(){
    long long n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;

        cout<<divisor(a)<<endl;
    }
}
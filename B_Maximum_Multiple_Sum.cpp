



#include <bits/stdc++.h>

using namespace std;



long long main() {
    long long t;
    cin >> t;

    while (t--) {
       long long n;
       cin>>n;
        long long maxi = 2;
        long long maxind = 2;
       for(long long i = 2;i<=n ;i++){
        long long l = 1;
        long long sum = (l*i*(l+1)/2);;
        while((l+1)*i <= n){
            l++;
            sum = (l*(l+1)/2)*i; 
            // cout<<"loda"<<endl;
        }
        
        if(sum > maxi){
            // cout<<"chan - "<<i<<"  -hiklkghh- "<<sum<<endl;
            maxi = sum;
            maxind = i;
        }
        

       }
       cout<<maxind<<endl;
        
    }
    return 0;
}


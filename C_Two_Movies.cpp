#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
long long ans = 0;
long long recur(vector<long long> &a,vector<long long> &b, long long ind,long long n,long long av,long long bv) {
    if(ind >= n){
        ans = max(ans,max(av,bv));
        return 0;
    }

    long long take = long long_MIN;
    av +=a[ind]; 
    take = max(take,recur(a,b,ind+1,n,av,bv) +a[ind]);
    av -= a[ind];
    bv += b[ind];
    take = max(take,recur(a,b,ind+1,n,av,bv) +b[ind]);
    bv -= b[ind];
    return take;
    
    // Write your code here.
    
}

long long main() {
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);

        for(long long i = 0;i<n;i++){
            cin>>a[i];
        }
        for(long long i = 0;i<n;i++){
            cin>>b[i];
        }
        long long ans = 0;
        long long av = 0,bv = 0;
        long long buff = 0;
        for(long long i = 0;i<n;i++){
            if(a[i] == b[i]){
                if(a[i] == 0) continue;
                else if(a[i] == 1){
                    if(av < bv){
                        av++;
                    }
                    else if(av == bv){
                        buff++;
                    }
                    else{
                        bv++;
                    }
                }
                else{
                    if(av > bv){
                        av--;
                    }
                    else if(av == bv){
                        buff--;
                    }
                    else{
                        bv--;
                    }
                }
            }
            else{
                
            }

        }

        ans = min(av + buff,bv);
        ans = max(ans,min(av,bv+  buff));
        cout<<ans<<endl;
    }
    return 0;
}

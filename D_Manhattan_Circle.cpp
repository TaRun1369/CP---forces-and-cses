



#include <bits/stdc++.h>

using namespace std;



long long main() {
    long long t;
    cin >> t;

    while (t--) {
       long long n,m;
       cin>>n>>m;
        long long maxihash = 0;
        long long prevhash = -1;
        long long jj = -1;
       for(long long i = 0;i<n;i++){
        long long hash = 0;
        long long firsthash = -1;
        long long flag = 0;
        for(long long j = 0;j<m;j++){
            char x;
            cin>>x;
            if(x == '#'){
                if(jj == -1) jj = j;
                if(firsthash == -1){
                    firsthash = i;
                }
                hash++;
            }

        }
        if(hash >= maxihash){
            maxihash = hash;
            prevhash = firsthash;
        }
        else {
            // cout<<"prevhash - "<<prevhash<<"  maxi "<<maxihash <<endl;
            flag = 1;
            // break;
        }
        // if(flag == 1) break;
       }

       cout<<prevhash+1 <<" "<<jj + 1<<endl;
        
    }
    return 0;
}


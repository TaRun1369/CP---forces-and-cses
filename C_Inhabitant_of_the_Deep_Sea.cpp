    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
            long long n,k;
            cin>>n>>k;
            vector<long long> a(n);
            for(long long i=0;i<n;i++){
                cin>>a[i];
            }
            long long f = 1;

            long long i = 0, j = n-1;
            // cout<<"ini k - "<<k<<endl;
            while(i <= j && k > 0){
                if(i == j){
                    if(k == a[i]){
                        j = i - 1;
                        break;
                    }
                }
                long long kit = 0;
                // cout<<"ele - "<<a[i]<<" "<<a[j]<<endl;
                // cout<<i<<" "<<j<<endl;
                if(a[i] == a[j] ){
                    if(f == 1){
                        if( k >= 2*a[i] - 1){
                        kit = (2*a[i] - 1);
                        k -= (2*a[i] - 1);
                        i++;
                        a[j] -= (kit/2);
                        }
                        else {
                            k = 0;
                        }
                    }
                    else{
                        if( k >= 2*a[j] - 1){
                        kit = (2*a[j] - 1);
                        k -= (2*a[j] - 1);
                        j--;
                        a[i] -= (kit/2);
                        }
                        else {
                            k = 0;
                        }

                    }
                    
                }
                else{
                    if(a[i] > a[j] ){
                        // cout<<"peeche"<<endl;
                        if(k >= 2*a[j] - (f == 0)){
                            kit = (2*a[j] - (f == 0));
                        // cout<<"minus - "<<2*a[j] - (f == 0)<<endl;
                        k-= (2*a[j] - (f == 0));
                        j--;
                        a[i] -= (kit/2);
                        }
                        else{
                            k = 0;
                        }
                    }
                    else{
                        // cout<<"aage"<<endl;
                        if(k >= 2*a[i] - (f == 1)){
                            
                            kit = (2*a[i] - (f == 1));
                            // cout<<"minus - "<<2*a[i] - (f == 1)<<endl;
                            k-= (2*a[i] - (f == 1));
                            i++;
                            a[j] -= (kit/2);
                        }
                        else{
                            k = 0;
                        }   
                    }
                }
                // cout<<"k - "<<k<<endl;
                if(kit%2 !=0){
                    f = !f;
                }
                
            }

            cout<<n - (j - i + 1)<<endl;

               

    }
}

        

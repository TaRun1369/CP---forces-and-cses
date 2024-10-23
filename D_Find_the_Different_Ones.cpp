    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        long long tc;
        cin>>tc;
        long long m = 1e9 + 7;
        while(tc--){
           long long n;
           cin>>n;
           vector<long long> v(n),diff;
        //    unordered_map<long long,long long> mp;
           for(long long i = 0;i<n;i++){
            cin>>v[i];
            
            // mp[v[i]]++;
           }

           for(long long i = 0;i<n-1;i++){
            if( v[i] != v[i+1])
                diff.push_back(i);
           }
           
        //    cout<<"difffffff"<<endl;
        //    for(auto it : diff) cout<<it<<" ";
        //    cout<<endl;


           long long q;
           cin>>q;
           while(q--){
            long long i,j;
            cin>>i>>j;
            i--;
            j--;
            long long lowi = lower_bound(diff.begin(),diff.end(),i) - diff.begin();
            if(lowi < diff.size() && diff[lowi] + 1<= j){
                cout<<diff[lowi]+1<<" "<<diff[lowi] + 2<<endl;
                continue;
            }
            else {
                cout<<-1<<" "<<-1<<endl;
                 continue;
            }
           }
           cout<<endl;
           

        }
    
    
    }
    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
  bool alreadysorted(vector<long long> &v){
    long long n = v.size();
    for(long long i = 0 ;i<n-1;i++){
      if(v[i+1] < v[i]){
        return false;
      }

    }
    return true;
  }
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
          long long n;
          cin>>n;
          vector<long long> v(n);
          for(long long i = 0;i<n;i++){
            cin>>v[i];
          }
          if(alreadysorted(v)) cout<<0<<endl;
          else if(v[n-1] < v[n-2] || (v[n-1] < 0 && v[n-2] < 0)) cout<<-1<<endl;
          
          else{
            cout<<n-2<<endl;
            for(long long i = 0;i<n-2;i++){
              cout<<i+1<<" "<<n-1<<" "<<n<<endl;
            }
          }
        }
    
    
    }
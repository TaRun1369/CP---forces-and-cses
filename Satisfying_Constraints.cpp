#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
 
long long main() {
    

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        set<long long> s;
        long long lb = long long_MIN,ub = long long_MAX;
        for(long long i = 0;i<n;i++){
            long long a,b;
            
            cin>>a>>b;
            if(a == 1 && b > lb){
                // cout<<"a == 1"<<endl;
                lb = b;
            }
            else if(a == 2 && b < ub){  
                // cout<<"a == 2"<<endl;
                ub = b;
            }
            
                else if(a == 3){
                    // cout<<"a == 3"<<endl;
                    s.insert(b);
                }
            
        }
        // cout<<lb<<ub<<endl;
        if(lb > ub){

            cout<<0<<endl;
            continue;
        }
        // cout<<"for"<<endl;
        // cout<<s.size()<<endl;
        // for(auto& is : s){
        //     cout<<"set ke andar "<<is<<" ";
        // }
        long long count = 0;
        for(auto it : s){
            // cout<<"set ke bande "<<it<<" ";
            if(it < lb || it > ub){
                count++;
            }
        }
      
        long long sum = ub - lb + 1;
        // cout<<"sum - "<<sum<<endl;
        // cout<<"s.size() - "<<s.size()<<endl;
        
            
            cout<<sum - s.size() + count<<endl;
    
    }
}



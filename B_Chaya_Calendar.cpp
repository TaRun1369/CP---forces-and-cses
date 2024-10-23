

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    vector<long long> v(a);
    for(long long i=0;i<a;i++){
        cin>>v[i];
    }
    
    long long currtime = v[0] + 1;
    // cout<<"ini"<<endl;
    // cout<<currtime<<endl;
            for(long long i =1;i<a;i++){
                // if(currtime-1 == v[i])continue;
                if(currtime > v[i]){
                    long long div = currtime/v[i];long long rem = currtime%v[i];
                    if(rem != 0){
                    div++;
                    currtime = div*v[i] + 1;
                    }
                    else{
                        currtime = div*v[i] + 1;
                    }
                    
                }else{
                    currtime = v[i] + 1;
                }
            }
            cout<<currtime-1<<endl;

   }

}



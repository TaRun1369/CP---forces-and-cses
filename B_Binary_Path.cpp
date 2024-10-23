#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long t;
    cin>>t;
    vector<vector<char>>v(2);
        for(long long i = 0;i<2;i++){
            for(long long j = 0;j<t;j++){
                // cout<<"i: "<<i<<"j: "<<j<<endl;
                
                char x;
                cin>>x;
                v[i].push_back(x);
                // cout<<"ele : "<<v[i][j]<<endl;
            }
        }


        long long i = 0,flag = 0;
        // cout<<"t - "<<t<<endl;
        long long noe = 1;
        cout<<v[0][0];
        for(;i<t-1;i++){
            if(v[0][i+1] == v[1][i+1]) noe = max(noe,t - i); 
            // else noe = 1;
            if(v[0][i+1] == '0'){
                cout<<0;
            }
            else if(v[1][i+1] == '0'){
                // cout<<0;
                flag = 1;
                break;
            }
            else{
                cout<<1;
            }
        }
        if(flag == 1){
            for(;i<t;i++){
                cout<<v[1][i];
            }
        }
        else {
            cout<<v[1][t-1];
        }

       


        
cout<<endl;
 cout<<noe<<endl;

    }


   }
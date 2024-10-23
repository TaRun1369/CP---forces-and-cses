// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 
 
 
// long long main() {
    

//    long long n;
//    cin>>n;
//    while(n--){
//     long long a;
//     cin>>a;
    
//     long long div = a/26;
//     long long rem = a%26;
//     if(div == 0){
//         cout<<'a'<<'a'<<char( (a-2) + 96)<<endl;

//     }
//     else if(div == 1){
//         cout<<'a'<<char(96+rem-1)<<'z'<<endl;
//     }
//     else if(div == 2){
//         cout<<char(96+ rem)<<'z'<<'z'<<endl;
//     }
//     else{
//         cout<<'z'<<'z'<<'z'<<endl;
//     }
//    }

// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;

    vector<long long> v;
    for(long long i = 0;i<a;i++){
        long long o;
        cin>>o;
        v.push_back(o);
    }
    if(a == 1){ cout<<0<<endl;
    continue;
    }
    long long i = 0;
    long long j= a-1;
        // cout<<i<<endl;
        // cout<<v[i]<<v[i+1]<<endl;
        while(i < a-1 && v[i] == v[i+1]){
            // cout<<"Yaha"<<endl;
            // cout<<v[i]<<" "<<v[i+1]<<endl;
            i++;
        }
        while(j > 0 && v[j] == v[j-1]){
            j--;
        }
    
    if(v.front() == v.back()){
        if(i > j){
            cout<<0<<endl;
        }
        else{
            // cout<<"i - "<<i<<"j - "<<j<<endl;
            cout<<a - (i+1+a-j) <<endl;
        }
    }
    else{
        // cout<<"i"<<i<<"j"<<j<<endl;
        // cout<<min(a - i -1,a-j-1)<<endl;
        cout<<a - max(i+1,a-j)<<endl;
    }


   }

}



// #include<bits/stdc++.h>
// using namespace std;

// long long main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long> a(n),b(n),c(n);
//         long long sum = 0;
//         for(long long i = 0;i<n;i++){cin>>a[i];
//         sum += a[i];
//         }
//         for(long long i = 0;i<n;i++){ cin>>b[i];
//         }
//         for(long long i = 0;i<n;i++){ cin>>c[i];
//         }

//         long long suma = 0,sumb = 0,sumc = 0;
//         long long s = sum/3;
//         long long fa = 0,fb = 0,fc = 0;
//         // long long start  = 0,end = 0;
//         long long la = 0,ra = 0,lb = 0,rb = 0,lc = 0,rc = 0;
//         for(long long i = 0;i<n;i++){
//             if(fa == 0) suma += a[i];
//             if(fb == 0) sumb += b[i];
//             if(fc == 0) sumc += c[i];

//             if(fa == 0 && (suma >= s ) && (fc == 1 || sumc <= suma) && (fb == 1 || sumb <= suma)){
                
//                     // cout<<"a - i "<<i<<endl;
//                     fa = 1;
//                     suma = 0;
//                     sumb = 0;
//                     sumc = 0;
//                     ra = i;
//                     if(fb == 0) lb = i+1;
//                     if(fc == 0) lc = i+1;

                
//             }
//             else if(fb == 0 && sumb >= s && (fc == 1 || sumc <= sumb)){
                     
//                     // cout<<"b - i "<<i<<endl;
//                     fb = 1;
//                     suma = 0;
//                     sumb = 0;
//                     sumc = 0;
//                     rb = i;
//                     if(fa == 0) la = i+1;
//                     if(fc == 0) lc = i+1;
                
//             }
//             else
//                  if(fc == 0 && sumc >= s){
//                     // cout<<"c - i "<<i<<endl;
//                     fc = 1;
//                     suma = 0;
//                     sumb = 0;
//                     sumc = 0;
//                     rc = i;
//                     if(fa == 0) la = i+1;
//                     if(fb == 0) lb = i+1;
                
//             }
            
//         }

//         if(fa == 1 && fb == 1 && fc == 1){
//             cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }



//     }
   

// }

#include <bits/stdc++.h>
using namespace std;

long long main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n), c(n);
        long long total = 0;

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> c[i];
        }

        long long required = (total + 2) / 3;  // ceil(total / 3.0)
        bool found = false;
        long long la = -1, ra = -1, lb = -1, rb = -1, lc = -1, rc = -1;

        for (long long i = 0; i < n && !found; i++) {
            long long suma = 0, sumb = 0, sumc = 0;

            for (long long j = i; j < n && !found; j++) {
                suma += a[j];
                if (suma >= required) {
                    for (long long k = j + 1; k < n && !found; k++) {
                        sumb += b[k];
                        if (sumb >= required) {
                            for (long long l = k + 1; l < n && !found; l++) {
                                sumc += c[l];
                                if (sumc >= required) {
                                    la = i + 1;
                                    ra = j + 1;
                                    lb = j + 2;
                                    rb = k + 1;
                                    lc = k + 2;
                                    rc = l + 1;
                                    if (rc == n) {
                                        found = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        if (found) {
            cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

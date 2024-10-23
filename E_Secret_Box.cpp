



// #include <bits/stdc++.h>

// using namespace std;

// long long rx,ry,rz;
// long long calcu(long long x,long long y,long long z,long long k ){
//     long long ans = 0;
//     ans += ((rx - x + 1)*(ry - y + 1)*(rz - z + 1));
//     return ans;
// }
// long long main() {
//     long long t;
//     cin >> t;
//     long long ans = 0;
//     while (t--) {
//        long long x,y,z,k;
//        cin>>x>>y>>z>>k;
//        rx = x;
//        ry = y;
//        rz = z;
//        vector<long long> v(3,0);
//        if(x>=y && x >= z){
//         v[0] = 1;
//         long long xx = x;
//         while(xx--){
//             if(k%xx != 0){
//                 xx--;
//                 continue;
//             }
//             else{
//                 long long rem = k / xx;
//                 long long maxi =  max(y,z);

//                 while(k%maxi == 0 && k/maxi <= min(y,z)){
//                      if(k%(xx*maxi) == 0){
//                         ans = max(ans,calcu(xx,maxi,k/(maxi*xx),k));
//                      }
//                     maxi--;
//                 }
               
//             }
//         }
//        }
//        else if(y >= z && y >= x){
//         v[1] = 1;
//             long long yy = y;
//         while(yy--){
//             if(k%yy != 0){
//                 yy--;
//                 continue;
//             }
//             else{
//                 long long rem = k / yy;
//                 long long maxi =  max(x,z);

//                 while(k%maxi == 0 && k/maxi <= min(x,z)){
//                      if(k%(yy*maxi) == 0){
//                         ans = max(ans,calcu(yy,maxi,k/(maxi*yy),k));
//                      }
//                     maxi--;
//                 }
               
//             }
//         }
//        }
//        else{
//         v[2] = 1;
//                     long long xx = z;
//         while(xx--){
//             if(k%xx != 0){
//                 xx--;
//                 continue;
//             }
//             else{
//                 long long rem = k / xx;
//                 long long maxi =  max(y,x);

//                 while(k%maxi == 0 && k/maxi <= min(y,x)){
//                      if(k%(xx*maxi) == 0){
//                         ans = max(ans,calcu(xx,maxi,k/(maxi*xx),k));
//                      }
//                     maxi--;
//                 }
               
//             }
//         }


//        }

//        cout<<ans<<endl;

        
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

long long calcu(long long x, long long y, long long z, long long k) {
    // Calculate the number of distinct locations to place the box
    return (x - 1 + 1) * (y - 1 + 1) * (z - 1 + 1);
}

long long main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long t;
    cin >> t;
    
    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;
        
        long long ans = 0;
        for (long long i = 1; i * i * i <= k; ++i) {
            if (k % i == 0) {
                long long jk = k / i;
                for (long long j = 1; j * j <= jk; ++j) {
                    if (jk % j == 0) {
                        long long l = jk / j;
                        // Check all permutations of (i, j, l) within (x, y, z)
                        if (i <= x && j <= y && l <= z)
                            ans = max(ans, calcu(x - i + 1, y - j + 1, z - l + 1, k));
                        if (i <= x && l <= y && j <= z)
                            ans = max(ans, calcu(x - i + 1, y - l + 1, z - j + 1, k));
                        if (j <= x && i <= y && l <= z)
                            ans = max(ans, calcu(x - j + 1, y - i + 1, z - l + 1, k));
                        if (j <= x && l <= y && i <= z)
                            ans = max(ans, calcu(x - j + 1, y - l + 1, z - i + 1, k));
                        if (l <= x && i <= y && j <= z)
                            ans = max(ans, calcu(x - l + 1, y - i + 1, z - j + 1, k));
                        if (l <= x && j <= y && i <= z)
                            ans = max(ans, calcu(x - l + 1, y - j + 1, z - i + 1, k));
                    }
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}



// long long vis[101];
// long long main(){
//     long long t;
//     cin>>t;
//     while(t--){
//     long long n,m;
//     cin>>n>>m;
//     if(n == 1 && m== 1) {
//         long long x;
//         cin>>x;
//         cout<<-1<<endl;
//         continue;
//     }
//     long long tot = n*m;
//     for(long long i = 0;i<n;i++){
//         for(long long j = 0;j<m;j++){
//             long long x;
//             cin>>x;
//             for(long long i = 1;i<=tot;i++){
//                 if(x != i && vis[i] == 0){
//                     cout<<i<<" ";
//                 }
//             }

//         }
//         cout<<endl;
//         }
//     }    
// }
#include<bits/stdc++.h>
using namespace std;

long long main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (n == 1 && m == 1) {
            long long x;
            cin >> x;
            cout << -1 << endl;
            continue;
        }

        long long tot = n * m;
        // vector<long long> vis(tot + 1, 0); 

        // long long matrix[n][m];


        // for (long long i = 0; i < n; i++) {
        //     for (long long j = 0; j < m; j++) {
        //         cin >> matrix[i][j];
        //     }
        // }

        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                // long long x = matrix[i][j];
                
                // for (long long k = 1; k <= tot; k++) {
                //     if (x != k && vis[k] == 0) {
                //         cout << k << " ";
                //         vis[k] = 1; 
                //         break;
                //     }
                // }
                long long x;
                cin>>x;
                if(x == tot) cout<<1<<" ";
                else cout<<x+1<<" ";
                
            }
            cout << endl;
        }
    }
    return 0;
}

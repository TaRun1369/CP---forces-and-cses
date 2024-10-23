



// // // // #include <bits/stdc++.h>

// // // // using namespace std;

// // // // long long rx,ry,rz;
// // // // long long calcu(long long x,long long y,long long z,long long k ){
// // // //     long long ans = 0;
// // // //     ans += ((rx - x + 1)*(ry - y + 1)*(rz - z + 1));
// // // //     return ans;
// // // // }
// // // // long long main() {
// // // //     long long t;
// // // //     cin >> t;
// // // //     long long ans = 0;
// // // //     while (t--) {
// // // //        long long x,y,z,k;
// // // //        cin>>x>>y>>z>>k;
// // // //        rx = x;
// // // //        ry = y;
// // // //        rz = z;
// // // //        vector<long long> v(3,0);
// // // //        if(x>=y && x >= z){
// // // //         v[0] = 1;
// // // //         long long xx = x;
// // // //         while(xx--){
// // // //             if(k%xx != 0){
// // // //                 xx--;
// // // //                 continue;
// // // //             }
// // // //             else{
// // // //                 long long rem = k / xx;
// // // //                 long long maxi =  max(y,z);

// // // //                 while(k%maxi == 0 && k/maxi <= min(y,z)){
// // // //                      if(k%(xx*maxi) == 0){
// // // //                         ans = max(ans,calcu(xx,maxi,k/(maxi*xx),k));
// // // //                      }
// // // //                     maxi--;
// // // //                 }
               
// // // //             }
// // // //         }
// // // //        }
// // // //        else if(y >= z && y >= x){
// // // //         v[1] = 1;
// // // //             long long yy = y;
// // // //         while(yy--){
// // // //             if(k%yy != 0){
// // // //                 yy--;
// // // //                 continue;
// // // //             }
// // // //             else{
// // // //                 long long rem = k / yy;
// // // //                 long long maxi =  max(x,z);

// // // //                 while(k%maxi == 0 && k/maxi <= min(x,z)){
// // // //                      if(k%(yy*maxi) == 0){
// // // //                         ans = max(ans,calcu(yy,maxi,k/(maxi*yy),k));
// // // //                      }
// // // //                     maxi--;
// // // //                 }
               
// // // //             }
// // // //         }
// // // //        }
// // // //        else{
// // // //         v[2] = 1;
// // // //                     long long xx = z;
// // // //         while(xx--){
// // // //             if(k%xx != 0){
// // // //                 xx--;
// // // //                 continue;
// // // //             }
// // // //             else{
// // // //                 long long rem = k / xx;
// // // //                 long long maxi =  max(y,x);

// // // //                 while(k%maxi == 0 && k/maxi <= min(y,x)){
// // // //                      if(k%(xx*maxi) == 0){
// // // //                         ans = max(ans,calcu(xx,maxi,k/(maxi*xx),k));
// // // //                      }
// // // //                     maxi--;
// // // //                 }
               
// // // //             }
// // // //         }


// // // //        }

// // // //        cout<<ans<<endl;

        
// // // //     }
// // // //     return 0;
// // // // }



// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // long long main() {
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(0);
    
// // //     long long t;
// // //     cin >> t;
    
// // //     while (t--) {
// // //             long long h, n;
// // //             cin>>h>>n;

// // //             vector<long long>v1(n);
// // //             for(long long i = 0;i<n;i++) cin>>v1[i];
// // //             vector<long long> c1(n);
// // //             for(long long i = 0;i<n;i++) cin>>c1[i];

// // //             map<long long,long long> mp;
// // //             for(long long i = 0;i<n;i++){
// // //                 mp[c1[i]]+= v1[i];
// // //             }

// // //             long long currtime = 0;
// // //             long long sum = accumulate(v1.begin(),v1.end(),0ll);
// // //             long long f = 0,ans = 0;
// // //             long long c = 1;
// // //             while(sum < h){
// // //                 for(auto it : mp){

// // //                     if(it.first*c > currtime){
// // //                         currtime = it.first*c;
// // //                         sum += it.second;
// // //                     }
// // //                     if(sum >= h){ f = 1;break;}
// // //                 }
// // //                 if(f == 1) break;
// // //                 c++;
                
// // //             }
// // //             cout<<c<<endl;
// // //         }
        
        
    
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // long long main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
    
// //     long long t;
// //     cin >> t;
    
// //     while (t--) {
// //         long long h, n;
// //         cin >> h >> n;
        
// //         vector<long long> damage(n);
// //         vector<long long> cooldown(n);
        
// //         for (long long i = 0; i < n; i++) {
// //             cin >> damage[i];
// //         }
// //         for (long long i = 0; i < n; i++) {
// //             cin >> cooldown[i];
// //         }
        
// //         vector<long long> next_available(n, 0); // when each attack can be used next
// //         long long turns = 0;
        
// //         while (h > 0) {
// //             turns++;
// //             long long turn_damage = 0;
// //             for (long long i = 0; i < n; i++) {
// //                 if (turns >= next_available[i]) {
// //                     turn_damage += damage[i];
// //                     next_available[i] = turns + cooldown[i];
// //                 }
// //             }
// //             h -= turn_damage;
// //         }
        
// //         cout << turns << endl;
// //     }
    
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// long long main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     long long t;
//     cin >> t;
    
//     while (t--) {
//         long long h, n;
//         cin >> h >> n;
        
//         vector<long long> damage(n);
//         vector<long long> cooldown(n);
        
//         for (long long i = 0; i < n; i++) {
//             cin >> damage[i];
//         }
//         for (long long i = 0; i < n; i++) {
//             cin >> cooldown[i];
//         }
        
//         // Prefix sum to keep track of cumulative damage up to each turn
//         map<long long, long long> damage_map; // maps turn number to total damage dealt up to that turn
//         long long total_damage = 0;
//         for (long long i = 0; i < n; i++) {
//             damage_map[cooldown[i]] += damage[i];
//         }
        
//         vector<long long> damage_prefix(2e5 + 5, 0);
//         for (auto &p : damage_map) {
//             damage_prefix[p.first] = p.second;
//         }
        
//         for (long long i = 1; i < damage_prefix.size(); i++) {
//             damage_prefix[i] += damage_prefix[i - 1];
//         }
        
//         long long turns = 0;
//         long long curr_damage = 0;
        
//         while (h > 0) {
//             turns++;
//             curr_damage = damage_prefix[turns];
//             h -= curr_damage;
//         }
        
//         cout << turns << endl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Attack {
    long long damage;
    long long next_available_turn;
    long long cooldown;
};

long long main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long t;
    cin >> t;
    
    while (t--) {
        long long h, n;
        cin >> h >> n;
        
        vector<Attack> attacks(n);
        
        for (long long i = 0; i < n; i++) {
            cin >> attacks[i].damage;
        }
        for (long long i = 0; i < n; i++) {
            cin >> attacks[i].cooldown;
            attacks[i].next_available_turn = 0;
        }
        
        // Priority queue to manage attacks by their next available turn
        auto cmp = [](const Attack &a, const Attack &b) {
            return a.next_available_turn > b.next_available_turn;
        };
        priority_queue<Attack, vector<Attack>, decltype(cmp)> pq(cmp, attacks);
        
        long long turns = 0;
        
        while (h > 0) {
            turns++;
            long long turn_damage = 0;
            
            vector<Attack> temp;
            
            // Process all attacks available in this turn
            while (!pq.empty() && pq.top().next_available_turn <= turns) {
                Attack attack = pq.top();
                pq.pop();
                turn_damage += attack.damage;
                attack.next_available_turn = turns + attack.cooldown;
                temp.push_back(attack);
            }
            
            for (auto &attack : temp) {
                pq.push(attack);
            }
            
            h -= turn_damage;
        }
        
        cout << turns << endl;
    }
    
    return 0;
}

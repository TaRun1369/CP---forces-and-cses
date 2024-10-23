// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;



// // // // // // // long long main(){
// // // // // // //     long long n;
// // // // // // //     cin>>n;
// // // // // // //     long long m;
// // // // // // //     cin>>m;

// // // // // // //     // vector<vector<long long>> pref();
// // // // // // //     map<long long,map<long long,long long>>mp;
// // // // // // //     for(long long i = 0;i<n;i++){
// // // // // // //         set<long long> s;
// // // // // // //         for(long long j = 0;j<m;j++){
// // // // // // //             long long x;
// // // // // // //             cin >>x;
// // // // // // //             v.push_back(x);
// // // // // // //         }

// // // // // // //         for(long long j = m-2;j>=0;j--){
// // // // // // //             long long v = v[j];

// // // // // // //         }


// // // // // // //     }
// // // // // // // }
// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // long long main() {
// // // // // //     long long n, m;
// // // // // //     cin >> n >> m;

// // // // // //     // Map to store the preference count for each song
// // // // // //     map<long long, map<long long, long long>> preferenceCount;

// // // // // //     // Reading preferences and updating counts
// // // // // //     for (long long i = 0; i < n; i++) {
// // // // // //         vector<long long> v;
// // // // // //         for (long long j = 0; j < m; j++) {
// // // // // //             long long x;
// // // // // //             cin >> x;
// // // // // //             v.push_back(x);
// // // // // //         }

// // // // // //         set<long long> uniqueSongs(v.begin(), v.end());

// // // // // //         for (long long j = m - 1; j >= 0; j--) {
// // // // // //             long long song = v[j];
// // // // // //             for (auto it = uniqueSongs.begin(); it != uniqueSongs.end(); ++it) {
// // // // // //                 if (*it != song) {
// // // // // //                     preferenceCount[song][*it]++;
// // // // // //                 }
// // // // // //             }
// // // // // //             uniqueSongs.erase(song);
// // // // // //         }
// // // // // //     }

// // // // // //     vector<pair<long long, long long>> songPreferences(m);

// // // // // //     // Calculate preference for each song
// // // // // //     for (long long i = 0; i < m; i++) {
// // // // // //         long long preferenceScore = 0;
// // // // // //         for (long long j = 0; j < m; j++) {
// // // // // //             if (i != j) {
// // // // // //                 preferenceScore += preferenceCount[i][j];
// // // // // //             }
// // // // // //         }
// // // // // //         songPreferences[i] = {preferenceScore, i};
// // // // // //     }

// // // // // //     // Sort based on preference scores (and song index for tie-breaking)
// // // // // //     sort(songPreferences.begin(), songPreferences.end(), greater<>());

// // // // // //     // Output preference order for each song
// // // // // //     cout << "Preference order for each song:" << endl;
// // // // // //     for (long long i = 0; i < m; i++) {
// // // // // //         long long song = songPreferences[i].second;
// // // // // //         cout<< song << " ";
// // // // // //         // for (auto &p : preferenceCount[song]) {
// // // // // //         //     cout << p.first << " (" << p.second << " times) ";
// // // // // //         // }
// // // // // //         // cout << endl;
// // // // // //     }

// // // // // //     // Resulting song to be preferred by more than half the people
// // // // // //     long long resultSong = songPreferences[0].second;

// // // // // //     cout << "Song " << resultSong << " should be preferred by more than half of the people." << endl;

// // // // // //     return 0;
// // // // // // }

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // long long main() {
// // // // //     long long n, m;
// // // // //     cin >> n >> m;

// // // // //     // Map to store the preference count for each song
// // // // //     map<long long, map<long long, long long>> preferenceCount;

// // // // //     // Reading preferences and updating counts
// // // // //     for (long long i = 0; i < n; i++) {
// // // // //         vector<long long> v;
// // // // //         for (long long j = 0; j < m; j++) {
// // // // //             long long x;
// // // // //             cin >> x;
// // // // //             v.push_back(x);
// // // // //         }

// // // // //         set<long long> uniqueSongs(v.begin(), v.end());

// // // // //         for (long long j = m - 1; j >= 0; j--) {
// // // // //             long long song = v[j];
// // // // //             for (auto it = uniqueSongs.begin(); it != uniqueSongs.end(); ++it) {
// // // // //                 if (*it != song) {
// // // // //                     preferenceCount[song][*it]++;
// // // // //                 }
// // // // //             }
// // // // //             uniqueSongs.erase(song);
// // // // //         }
// // // // //     }

// // // // //     vector<pair<long long, long long>> songPreferences(m);

// // // // //     // Calculate preference for each song
// // // // //     for (long long i = 0; i < m; i++) {
// // // // //         long long preferenceScore = 0;
// // // // //         for (long long j = 0; j < m; j++) {
// // // // //             if (i != j) {
// // // // //                 preferenceScore += preferenceCount[i][j];
// // // // //             }
// // // // //         }
// // // // //         songPreferences[i] = {preferenceScore, i};
// // // // //     }

// // // // //     // Sort based on preference scores (and song index for tie-breaking)
// // // // //     sort(songPreferences.begin(), songPreferences.end(), greater<>());

// // // // //     // Output the final order of songs based on preferences
// // // // //     cout << "Final preferred order of songs: ";
// // // // //     for (long long i = 0; i < m; i++) {
// // // // //         cout << songPreferences[i].second << " ";
// // // // //     }
// // // // //     cout << endl;

// // // // //     return 0;
// // // // // }

// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // long long main() {
// // // //     long long n, m;
// // // //     cin >> n >> m;

// // // //     // Vector to store the preference count for each song
// // // //     vector<long long> preferenceCount(m, 0);

// // // //     // Reading preferences and updating counts
// // // //     for (long long i = 0; i < n; i++) {
// // // //         vector<long long> v(m);
// // // //         for (long long j = 0; j < m; j++) {
// // // //             cin >> v[j];
// // // //         }

// // // //         // Updating preference counts based on the input list
// // // //         for (long long j = 0; j < m; j++) {
// // // //             preferenceCount[v[j]] += (m - j - 1);
// // // //         }
// // // //     }

// // // //     // Vector of pairs to hold preference scores and corresponding song indices
// // // //     vector<pair<long long, long long>> songPreferences(m);

// // // //     for (long long i = 0; i < m; i++) {
// // // //         songPreferences[i] = {preferenceCount[i], i};
// // // //     }

// // // //     // Sort based on preference scores in descending order (and song index for tie-breaking)
// // // //     sort(songPreferences.rbegin(), songPreferences.rend());

// // // //     // Output the final order of songs based on preferences
// // // //     cout << "Final preferred order of songs: ";
// // // //     for (long long i = 0; i < m; i++) {
// // // //         cout << songPreferences[i].second << " ";
// // // //     }
// // // //     cout << endl;

// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>

// // // using namespace std;

// // // // Function to check if it is possible to distribute the extra parcels 
// // // // such that each man has at most 'maxParcels' parcels
// // // bool isPossible(const vector<long>& parcels, long extra, long maxParcels) {
// // //     long needed = 0;
// // //     for (const auto& p : parcels) {
// // //         if (p > maxParcels) {
// // //             return false; // If a man already has more parcels than maxParcels, distribution is not possible
// // //         }
// // //         needed += maxParcels - p;
// // //     }
// // //     return needed <= extra;
// // // }

// // // // Function to find the minimal maximum number of parcels any man has to take
// // // long distributeParcels(vector<long>& parcels, long extra) {
// // //     long low = *max_element(parcels.begin(), parcels.end()); // Minimum possible value for maxParcels
// // //     long high = low + extra; // Maximum possible value for maxParcels
// // //     long answer = high;
    
// // //     while (low <= high) {
// // //         long mid = low + (high - low) / 2;
        
// // //         if (isPossible(parcels, extra, mid)) {
// // //             answer = mid;
// // //             high = mid - 1; // Try to find a smaller maximum
// // //         } else {
// // //             low = mid + 1; // Increase the mid value as current mid is not feasible
// // //         }
// // //     }
    
// // //     return answer;
// // // }

// // // long long main() {
// // //     vector<long> parcels = {7,5,1,9,1}; // Example input
// // //     long extra = 25; // Example extra parcels
    
// // //     long result = distributeParcels(parcels, extra);
// // //     cout << "Minimum possible maximum parcels per man: " << result << endl;
    
// // //     return 0;
// // // }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;


// bool isPossible(const vector<long>& parcels, long extra, long maxParcels) {
//     long needed = 0;
//     for (const auto& p : parcels) {
//         if (p < maxParcels) {
//             needed += maxParcels - p;
//         }
//     }
//     return needed >= extra;
// }

// long distributeParcels(vector<long>& parcels, long extra) {
//     long low = 0; 
//     long high = extra; 
//     long answer = extra;
    
//     while (low <= high) {
//         long mid = low + (high - low) / 2;
        
//         if (isPossible(parcels, extra, mid)) {
//             answer = min(answer,mid);
//             high = mid - 1; 
//         } else {
//             low = mid + 1; 
//         }
//     }
    
//     return answer;
// }

// long long main() {
//     vector<long> parcels = {7, 5, 1, 9, 1}; // Example input
//     long extra = 25; 
    
//     long result = distributeParcels(parcels, extra);
//     cout << "Minimum possible maximum parcels per man: " << result << endl;
    
   
//     return 0;
// }

// // #include <bits/stdc++.h>

// // using namespace std;

// // // Function to check if it is possible to distribute the extra parcels 
// // // such that each man has at most 'maxParcels' parcels
// // bool isPossible(const vector<long>& parcels, long extra, long maxParcels) {
// //     long needed = 0;
// //     for (long long p : parcels) {
    
// //             needed += max(0,maxParcels - p);
// //     }
// //     return needed <= extra;
// // }

// // // Function to find the minimal maximum number of parcels any man has to take
// // long distributeParcels(vector<long>& parcels, long extra) {
// //     long low = 0; // Starting at 0
// //     long high = extra; // Maximum possible value for maxParcels
// //     long answer = extra;
    
// //     while (low <= high) {
// //         long mid = low + (high - low) / 2;
        
// //         if (isPossible(parcels, extra, mid)) {
// //             answer = mid;
// //             high = mid - 1; // Try to find a smaller maximum
// //         } else {
// //             low = mid + 1; // Increase the mid value as current mid is not feasible
// //         }
// //     }
    
// //     return answer;
// // }

// // bool check(long long mid,vector<long long> &p,long long extra){
// //     long abh = 0;
// //     for(auto it : p){
// //         abh = max(0,long long(mid - it));
// //     }
// //     abh >= extra
// // }

// // long long main() {
// //     vector<long> parcels = {7, 5, 1, 9, 1}; // Example input
// //     long extra = 25; // Example extra parcels
// //     long ans = long long_MAX;
// //     long long low = 0;
// //     long long high = 25;
// //     while(low < high){
// //         long long mid = low + (high - low) / 2;
// //         if(check(mid,parcels,extra)){
// //             ans = min(ans,mid);
// //             high = mid - 1;
// //         }
// //         else{
// //             low = mid + 1;
// //         }
// //     }

// //     cout<<ans<<endl;
    
// //     return 0;
// // }


#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;
vector<int> ans(26,0);
void solve(string s) {
    int n = s.size();
    int i = n-1;
    while(i >= 0){
        int count = 1;
        char kon;
        if(s[i] == ')'){
            i--;
            string t = "";
            while(i >= 0 && isdigit(s[i])){
                t += s[i];
                i--;
            }
            reverse(t.begin(),t.end());
            count = stoi(t);
            i--;
            
        }
        
        if(i >= 0 && s[i] == '#'){
            // i--;
            string doo = "";
            if(i - 2 >= 0)
            doo += s[i - 2];
            if(i - 1 >= 0)
            doo += s[i - 1];
            
            kon = stoi(doo) - 1 + 'a';
            i-=3;
        }
        else{
            kon = s[i] - 1 + 'a';
            i--;
        }
        
         ans[kon - 'a'] += count;
    }
}

int main() {
   
solve("1226#24#");
for(int i = 0;i<26;i++) cout<<ans[i]<<" ";
    return 0;
}


#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

vector<int> ans(26, 0);

void solve(string s) {
    int n = s.size();
    int i = n - 1;

    while (i >= 0) {
        int count = 1;  // Default count is 1
        char kon;

        if (s[i] == ')') {
            i--;
            string t = "";
            while (i >= 0 && isdigit(s[i])) {
                t += s[i];
                i--;
            }
            reverse(t.begin(), t.end());
            count = stoi(t);
            i--;  // Skip '('
        }

        if (i >= 1 && s[i] == '#') {
            string doo = "";
            doo += s[i - 2];
            doo += s[i - 1];
            kon = stoi(doo) - 1 + 'a';
            i -= 3;  // Skip over "##" and the digits
        } else {
            kon = s[i] - '1' + 'a';
            i--;
        }

        ans[kon - 'a'] += count;
    }
}

int main() {
    solve("1226#24#");
    for (int i = 0; i < 26; i++) 
        cout << ans[i] << " ";
    
    return 0;
}

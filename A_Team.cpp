// // // // // // #include <iostream>
// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;
 
// // // // // // //   #define indd long long
// // // // // // //  #define long long64_t long long

 
// // // // // // long long main() {
    
// // // // // //     long long a,b,c;
// // // // // //     vector<long long> ip;
// // // // // //     cin>>a>>b>>c;
// // // // // //     for(long long i = 0;i<a;i++){
// // // // // //         long long ii;
// // // // // //         cin>>ii;
// // // // // //         ip.push_back(ii);
// // // // // //     }

// // // // // //     map<vector<long long>,long long> mp;
// // // // // //     long long eachcoun = b;
// // // // // //     cout<<"eachcoun : "<<eachcoun<<endl;
// // // // // //     for(long long i = 0;i<eachcoun;i++){
// // // // // //         vector<long long> temp;
// // // // // //         for(long long j = 0;j<b;j++){
// // // // // //             temp.push_back(ip[i*b+j]);
// // // // // //         }
// // // // // //         sort(temp.begin(),temp.end());
// // // // // //         mp[temp] = i+1;
// // // // // //     }


// // // // // //     long long k = c/b;
// // // // // //     long long rem = c%b;
// // // // // //     long long ans = 0,ans2 = 0;
// // // // // //     long long count = 0;
// // // // // //     cout<<"rem - "<<rem<<endl;
// // // // // //     cout<<"k - "<<k<<endl;

// // // // // //     for(auto it : mp){
// // // // // //         if(count == k+1){
// // // // // //             ans = it.second;
// // // // // //             ans2 = it.first[rem];
// // // // // //             break;
// // // // // //         }
// // // // // //         count++;
        
// // // // // //     }

// // // // // //     cout<<ans<<endl;
// // // // // //     cout<<ans2<<endl;
// // // // // // }


// // // // // #include <iostream>
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // long long main() {

// // // // //     long long a, b, c;
// // // // //     vector<long long> ip;
// // // // //     cin >> a >> b >> c;
// // // // //     for (long long i = 0; i < a; i++) {
// // // // //         long long ii;
// // // // //         cin >> ii;
// // // // //         ip.push_back(ii);
// // // // //     }

// // // // //     map<vector<long long>, long long> mp;
// // // // //     long long eachcoun = b;
// // // // //     cout << "eachcoun : " << eachcoun << endl;
// // // // //     for (long long i = 0; i < eachcoun; i++) {
// // // // //         vector<long long> temp;
// // // // //         for (long long j = 0; j < b; j++) {
// // // // //             temp.push_back(ip[i * b + j]);
// // // // //         }
// // // // //         sort(temp.begin(), temp.end());
// // // // //         mp[temp] = i + 1;
// // // // //     }

// // // // //     long long k = c / b;
// // // // //     long long rem = c % b;
// // // // //     long long ans = 0, ans2 = 0;
// // // // //     long long count = 0;
// // // // //     cout << "rem - " << rem << endl;
// // // // //     cout << "k - " << k << endl;

// // // // //     vector<long long> selectedVector; // Added variable to store the vector at kth index

// // // // //     for (auto it : mp) {
// // // // //         if (count == k-1) {
// // // // //             if(rem != 0){
// // // // //             ans = it.second;
// // // // //             selectedVector = it.first;
// // // // //             }
// // // // //             break;
// // // // //         }
// // // // //         count++;
// // // // //     }

// // // // //     cout << "Vector at kth index: ";
// // // // //     for (long long i = 0; i < selectedVector.size(); i++) {
// // // // //         cout << selectedVector[i] << " ";
// // // // //     }
// // // // //     cout << endl;

    
// // // // //     cout << ans << endl;
// // // // //     if(rem != 0){
// // // // //     cout << selectedVector[rem-1] << endl;
// // // // //     }
// // // // //     else{
// // // // //         cout<<selectedVector[b-1]<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <map>
// // // // #include <algorithm>

// // // // using namespace std;

// // // // bool customCompare(const vector<long long>& a, const vector<long long>& b) {
// // // //     // Compare the first elements
// // // //     if (a[0] != b[0]) {
// // // //         return a[0] < b[0];
// // // //     }
// // // //     // If the first elements are the same, compare the second elements
// // // //     return a[1] < b[1];
// // // // }

// // // // long long main() {

// // // //     long long a, b, c;
// // // //     vector<long long> ip;
// // // //     cin >> a >> b >> c;
// // // //     for (long long i = 0; i < a; i++) {
// // // //         long long ii;
// // // //         cin >> ii;
// // // //         ip.push_back(ii);
// // // //     }

// // // //     // Use custom comparison function when declaring the map
// // // //     map<vector<long long>, long long, decltype(&customCompare)> mp(&customCompare);

// // // //     long long eachcoun = b;
// // // //     cout << "eachcoun : " << eachcoun << endl;
// // // //     for (long long i = 0; i < eachcoun; i++) {
// // // //         vector<long long> temp;
// // // //         for (long long j = 0; j < b; j++) {
// // // //             temp.push_back(ip[i * b + j]);
// // // //         }
// // // //         sort(temp.begin(), temp.end());
// // // //         mp[temp] = i + 1;
// // // //     }

// // // //     long long k = c / b;
// // // //     long long rem = c % b;
// // // //     long long ans = 0, ans2 = 0;
// // // //     long long count = 0;
// // // //     cout << "rem - " << rem << endl;
// // // //     cout << "k - " << k << endl;

// // // //     vector<long long> selectedVector; // Added variable to store the vector at kth index

// // // //     for (auto it : mp) {
// // // //         if (count == k - 1) {
// // // //             if (rem != 0) {
// // // //                 ans = it.second;
// // // //                 selectedVector = it.first;
// // // //             }
// // // //             break;
// // // //         }
// // // //         count++;
// // // //     }

// // // //     cout << "Vector at kth index: ";
// // // //     for (long long i = 0; i < selectedVector.size(); i++) {
// // // //         cout << selectedVector[i] << " ";
// // // //     }
// // // //     cout << endl;

// // // //     cout << ans << endl;
// // // //     if (rem != 0) {
// // // //         cout << selectedVector[rem - 1] << e
// // // #include <iostream>
// // // #include <vector>
// // // #include <map>
// // // #include <algorithm>

// // // using namespace std;

// // // bool customCompare(const vector<long long>& a, const vector<long long>& b) {
// // //     // Compare the first elements
// // //     if (a[0] != b[0]) {
// // //         return a[0] < b[0];
// // //     }
// // //     // If the first elements are the same, compare the second elements
// // //     return a[1] < b[1];
// // // }

// // // long long main() {

// // //     long long a, b, c;
// // //     vector<long long> ip;
// // //     cin >> a >> b >> c;
// // //     for (long long i = 0; i < a; i++) {
// // //         long long ii;
// // //         cin >> ii;
// // //         ip.push_back(ii);
// // //     }

// // //     // Use custom comparison function when declaring the map
// // //     map<vector<long long>, long long, decltype(&customCompare)> mp(&customCompare);

// // //     long long eachcoun = b;
// // //     cout << "eachcoun : " << eachcoun << endl;
// // //     for (long long i = 0; i < eachcoun; i++) {
// // //         vector<long long> temp;
// // //         for (long long j = 0; j < b; j++) {
// // //             temp.push_back(ip[i * b + j]);
// // //         }
// // //         sort(temp.begin(), temp.end());
// // //         mp[temp] = i + 1;
// // //     }

// // //     long long k = c / b;
// // //     long long rem = c % b;
// // //     long long ans = 0, ans2 = 0;
// // //     long long count = 0;
// // //     cout << "rem - " << rem << endl;
// // //     cout << "k - " << k << endl;

// // //     vector<long long> selectedVector; // Added variable to store the vector at kth index

// // //     for (auto it : mp) {
// // //         if (count == k - 1) {
// // //             if (rem != 0) {
// // //                 ans = it.second;
// // //                 selectedVector = it.first;
// // //             }
// // //             break;
// // //         }
// // //         count++;
// // //     }

// // //     cout << "Vector at kth index: ";
// // //     for (long long i = 0; i < selectedVector.size(); i++) {
// // //         cout << selectedVector[i] << " ";
// // //     }
// // //     cout << endl;

// // //     cout << ans << endl;
// // //     if (rem != 0) {
// // //         cout << selectedVector[rem - 1] << endl;
// // //     } else {
// // //         cout << selectedVector[b - 1] << endl;
// // //     }

// // //     return 0;
// // // }

// // #include <iostream>
// // #include <vector>
// // #include <map>
// // #include <algorithm>

// // using namespace std;

// // bool customCompare(const vector<long long>& a, const vector<long long>& b) {
// //     // Compare the first elements
// //     if (a[0] != b[0]) {
// //         return a[0] < b[0];
// //     }
// //     // If the first elements are the same, compare the second elements
// //     return a[1] < b[1];
// // }

// // long long main() {

// //     long long a, b, c;
// //     vector<long long> ip;
// //     cin >> a >> b >> c;
// //     for (long long i = 0; i < a; i++) {
// //         long long ii;
// //         cin >> ii;
// //         ip.push_back(ii);
// //     }

// //     // Use custom comparison function when declaring the map
// //     map<vector<long long>, long long, decltype(&customCompare)> mp(&customCompare);

// //     long long eachcoun = b;
// //     cout << "eachcoun : " << eachcoun << endl;
// //     for (long long i = 0; i < eachcoun; i++) {
// //         vector<long long> temp;
// //         for (long long j = 0; j < b; j++) {
// //             temp.push_back(ip[i * b + j]);
// //         }
// //         sort(temp.begin(), temp.end());
// //         mp[temp] = i + 1;
// //     }

// //     long long k = c / b;
// //     long long rem = c % b;
// //     long long ans = 0;
// //     long long count = 0;
// //     cout << "rem - " << rem << endl;
// //     cout << "k - " << k << endl;

// //     vector<long long> selectedVector; // Added variable to store the vector at kth index

// //     for (auto it : mp) {
// //         if (count == k - 1) {
// //             ans = it.second;
// //             selectedVector = it.first;
// //             break;
// //         }
// //         count++;
// //     }

// //     cout << "Vector at kth index: ";
// //     for (long long i = 0; i < selectedVector.size(); i++) {
// //         cout << selectedVector[i] << " ";
// //     }
// //     cout << endl;

// //     cout << ans << endl;

// //     if (rem != 0) {
// //         cout << selectedVector[rem - 1] << endl;
// //     } else {
// //         cout << selectedVector.back() << endl; // Select the last element when rem is zero
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>

// using namespace std;

// bool customCompare(const vector<long long>& a, const vector<long long>& b) {
//     // Compare the first elements
//     if (a[0] != b[0]) {
//         return a[0] < b[0];
//     }
//     // If the first elements are the same, compare the second elements
//     return a[1] < b[1];
// }

// long long main() {

//     long long a, b, c;
//     vector<long long> ip;
//     cin >> a >> b >> c;
//     for (long long i = 0; i < a; i++) {
//         long long ii;
//         cin >> ii;
//         ip.push_back(ii);
//     }

//     // Use custom comparison function when declaring the map
//     map<vector<long long>, long long, decltype(&customCompare)> mp(&customCompare);

//     long long eachcoun = b;
//     cout << "eachcoun : " << eachcoun << endl;
//     for (long long i = 0; i < eachcoun; i++) {
//         vector<long long> temp;
//         for (long long j = 0; j < b; j++) {
//             temp.push_back(ip[i * b + j]);
//         }
//         sort(temp.begin(), temp.end());
//         mp[temp] = i + 1;
//     }

//     long long k = c / b;
//     long long rem = c % b;
//     long long ans = 0;
//     long long count = 0;
//     cout << "rem - " << rem << endl;
//     cout << "k - " << k << endl;

//     vector<long long> selectedVector; // Added variable to store the vector at kth index

//     for (auto it : mp) {
//         if (count == k - 1) {
//             ans = it.second;
//             selectedVector = it.first;
//             break;
//         }
//         count++;
//     }

//     cout << "Vector at kth index: ";
//     for (long long i = 0; i < selectedVector.size(); i++) {
//         cout << selectedVector[i] << " ";
//     }
//     cout << endl;

//     cout << ans << endl;

//     if (rem != 0) {
//         cout << selectedVector[rem - 1] << endl;
//     } else {
//         cout << selectedVector.back() << endl; // Select the last element when rem is zero
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool customCompare(const vector<long long>& a, const vector<long long>& b) {
    // Compare the first elements
    if (a[0] != b[0]) {
        return a[0] < b[0];
    }
    // If the first elements are the same, compare the second elements
    return a[1] < b[1];
}

long long main() {

    long long a, b, c;
    vector<long long> ip;
    cin >> a >> b >> c;
    for (long long i = 0; i < a; i++) {
        long long ii;
        cin >> ii;
        ip.push_back(ii);
    }

    // Use custom comparison function when declaring the map
    map<vector<long long>, long long, decltype(&customCompare)> mp(&customCompare);

    long long eachcoun = b;
    cout << "eachcoun : " << eachcoun << endl;
    for (long long i = 0; i < eachcoun; i++) {
        vector<long long> temp;
        for (long long j = 0; j < b; j++) {
            temp.push_back(ip[i * b + j]);
        }
        sort(temp.begin(), temp.end());
        mp[temp] = i + 1;
    }

    long long k = c / b;
    long long rem = c % b;
    long long ans = 0;
    long long count = 0;
    cout << "rem - " << rem << endl;
    cout << "k - " << k << endl;

    vector<long long> selectedVector; // Added variable to store the vector at kth index

    for (auto it : mp) {
        if (count == k - 1) {
            ans = it.second;
            selectedVector = it.first;
            break;
        }
        count++;
    }

    cout << "Vector at kth index: ";
    for (long long i = 0; i < selectedVector.size(); i++) {
        cout << selectedVector[i] << " ";
    }
    cout << endl;

    cout << ans << endl;

    if (rem != 0) {
        cout << selectedVector[rem - 1] << endl;
    } else {
        cout << selectedVector.back() << endl; // Select the last element when rem is zero
    }

    return 0;
}

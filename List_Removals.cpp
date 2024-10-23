
// #include<bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;

// template<class T> using OrdSet =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ; 
// // find_by_order  - index pe element
// // order_of_key - No. of elems smaller than element mentioned in bracket

// 	//                       greater<long long> - descending order
// long long main() {
// 	OrdSet<pair<long long,long long>> A; // declaration

// 	// // Inserting elements - 1st query
// 	// A.insert(1);
// 	// A.insert(10);
// 	// A.insert(2);
// 	// A.insert(7);
// 	// A.insert(2);  // ordered set only contains unique dataues

// 	// // A contains
// 	// cout << "A = ";
// 	// for (auto i : A)
// 	// 	cout << i << " ";
// 	// cout << endl;
// 	// cout << endl;

// 	// // finding kth element - 4th query
// 	// cout << "0th element: " << *A.find_by_order(0) << endl;
// 	// cout << "1st element: " << *A.find_by_order(1) << endl;
// 	// cout << "2nd element: " << *A.find_by_order(2) << endl;
// 	// cout << "3rd element: " << *A.find_by_order(3) << endl;
// 	// cout << endl;

// 	// // finding number of elements smaller than X - 3rd query
// 	// cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl; // 2
// 	// cout << "No. of elems smaller than 11: " << A.order_of_key(11) << endl; // 4
// 	// cout << "No. of elems smaller than 1: " << A.order_of_key(1) << endl; // 0
// 	// cout << endl;

// 	// // lower bound -> Lower Bound of X = first element >= X in the set
// 	// cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
// 	// cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
// 	// cout << endl;

// 	// // Upper bound -> Upper Bound of X = first element > X in the set
// 	// cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
// 	// cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
// 	// cout << endl;

// 	// // // Remove elements - 2nd query
// 	// A.erase(1);
// 	// A.erase(11); // element that is not present is not affected

// 	// // A contains
// 	// cout << "A = ";
// 	// for (auto i : A)
// 	// 	cout << i << " ";
// 	// cout << endl;

//     long long n;
//     cin>>n;
//     for(long long i = 0; i < n; i++){
//         long long x;
//         cin>>x;
//         A.insert({i,x});
//     }
//     for(long long i = 0;i<n;i++){
//         long long x;
//         cin>>x;
//         x--;
//         cout<<(*A.find_by_order(x))->second<<" ";
//         A.erase({i,x});
//     }

// }
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T>
using OrdSet = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order  - index pe element
// order_of_key - No. of elems smaller than element mentioned in bracket

//                       greater<long long> - descending order
long long main() {
    OrdSet<pair<long long, long long>> A; // declaration

    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        A.insert({i, x}); // Inserting {value, index}
    }
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        x--;
        cout << A.find_by_order(x)->second << " "; // Accessing the first element of the pair
        A.erase(*A.find_by_order(x)); // Erasing the element by its value
    }
}

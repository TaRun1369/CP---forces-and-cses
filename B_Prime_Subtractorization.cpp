#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

namespace number_theory {
    // GCD Function
    ll gcd(ll x, ll y) {
        if (x == 0) return y;
        if (y == 0) return x;
        return gcd(y, x % y);
    }

    // Prime Checker
    bool isprime(ll n) { 
        if (n <= 1) return false; 
        if (n <= 3) return true; 
        if (n % 2 == 0 || n % 3 == 0) return false; 
        for (ll i = 5; i * i <= n; i += 6) 
            if (n % i == 0 || n % (i+2) == 0) 
                return false; 
        return true; 
    } 

    // Sieve of Eratosthenes
    bool prime[15000105]; 
    void sieve(long long n) { 
        for (ll i = 0; i <= n; i++) prime[i] = true;
        for (ll p = 2; p * p <= n; p++) { 
            if (prime[p] == true) { 
                for (ll i = p * p; i <= n; i += p) 
                    prime[i] = false; 
            } 
        } 
        prime[1] = prime[0] = false;
    } 
    
    // Prime List
    vector<ll> primelist;
    bool __primes_generated__ = false;
    
    // Generate Primes up to n
    void genprimes(long long n) {
        __primes_generated__ = true;
        sieve(n + 1);
        for (ll i = 2; i <= n; i++) 
            if (prime[i]) 
                primelist.push_back(i);
    }
}

// Main function
int main() {
    using namespace number_theory;
    
    ll T;
    cin >> T; // Input number of test cases

    // Generate primes up to a high number (depends on problem constraints)
    genprimes(15000000); // Adjust according to problem's upper limit
    ll i = 1;
    while (T--) {
        ll N;
        cin >> N; // Input N for each test case

        if (N < 5) {
            cout <<"Case #"<<i<<": "<< 0 << endl;
        } else {
            // Calculate number of primes less than N-1
            ll count = upper_bound(primelist.begin(), primelist.end(), N - 2) - primelist.begin();
            cout << "Case #"<<i<<": "<<count << endl;
        }
        i++;
    }

    return 0;
}

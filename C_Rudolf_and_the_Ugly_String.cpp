#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

void computeLPSArray(string pat, long long M, long long lps[])
{
 
    // Length of the previous longest
    // prefix suffix
    long long len = 0;
    long long i = 1;
    lps[0] = 0; // lps[0] is always 0
 
    // The loop calculates lps[i] for
    // i = 1 to M-1
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
 
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
 
                // Also, note that we do not
                // increment i here
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}
 
long long KMPSearch(string pat, string txt)
{
    long long M = pat.length();
    long long N = txt.length();
 
    // Create lps[] that will hold the longest
    // prefix suffix dataues for pattern
    long long lps[M];
    long long j = 0; // index for pat[]
 
    // Preprocess the pattern (calculate lps[]
    // array)
    computeLPSArray(pat, M, lps);
 
    long long i = 0; // index for txt[]
    long long res = 0;
    long long next_i = 0;
 
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {
 
            // When we find pattern first time,
            // we iterate again to check if there
            // exists more pattern
            j = lps[j - 1];
            res++;
        }
 
        // Mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
 
            // Do not match lps[0..lps[j-1]]
            // characters, they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}


long long main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long countpie = 0,countmap = 0,countboth = 0;
        countpie = KMPSearch("pie",s);
        countmap = KMPSearch("map",s);
        countboth = KMPSearch("mapie",s);


        cout<<countpie + countmap - countboth<<endl;
    }
    

    return 0;
}

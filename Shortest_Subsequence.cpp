// #include <bits/stdc++.h>

// using namespace std;
// const long long maxN = 1e6+5;

// long long N, cnt;
// char S[maxN], ch[4] = {'A', 'C', 'G', 'T'};
// bool has[4];
// vector<long long> segs;
// map<char,long long> mp;

// void init(){
//     mp['A'] = 0;
//     mp['C'] = 1;
//     mp['G'] = 2;
//     mp['T'] = 3;
// }

// long long main(){
//     init();
//     scanf(" %s", S);

//     N = (long long) strlen(S);
//     for(long long i = 0; i < N; i++){
//         long long c = mp[S[i]];
//         if(!has[c]){
//             has[c] = true;
//             cnt++;
//             if(cnt == 4){
//                 fill(has, has+4, false);
//                 segs.push_back(0);
//                 cnt = 0;
//             }
//         }
//     }

//     for(long long i : segs)
//         prlong longf("%c", ch[i]);
//     for(long long i = 0; i < 4; i++){
//         if(!has[i]){
//             prlong longf("%c\n", ch[i]);
//             return 0;
//         }
//     }
// }
#include <bits/stdc++.h>

using namespace std;
const long long maxN = 1e6+5;

long long N, cnt;
char S[maxN], ch[4] = {'A', 'C', 'G', 'T'};
bool has[4];
vector<long long> segs;
map<char,long long> mp;

void init(){
    mp['A'] = 0;
    mp['C'] = 1;
    mp['G'] = 2;
    mp['T'] = 3;
}

long long main(){
    init();
    scanf(" %s", S);

    N = (long long) strlen(S);
    for(long long i = 0; i < N; i++){
        long long c = mp[S[i]];
        if(!has[c]){
            has[c] = true;
            cnt++;
            if(cnt == 4){
                fill(has, has+4, false);
                segs.push_back(i);
                cnt = 0;
            }
        }
    }

    for(long long i : segs)
        prlong longf("%c", S[i]);
    for(long long i = 0; i < 4; i++){
        if(!has[i]){
            prlong longf("%c\n", ch[i]);
            return 0;
        }
    }
}
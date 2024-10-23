

#include<bits/stdc++.h>
using namespace std;

long long input[200001];
long long seg[800001];

void build(long long node, long long start, long long end) {
    if(start == end) {
        seg[node] = input[start];
    } else {
        long long mid = (start + end) / 2;
        build(2*node + 1, start, mid);
        build(2*node + 2, mid + 1, end);
        seg[node] = max(seg[2*node + 1], seg[2*node + 2]);
    }
}

long long query(long long node, long long start, long long end, long long val) {
    // if(seg[node] < val) return -1;

    if(start == end) {
        return start;
    }

    long long mid = (start + end) / 2;
    if(seg[2*node + 1] >= val) {
        return query(2*node + 1, start, mid, val);
    } else {
        return query(2*node + 2, mid + 1, end, val);
    }
}

void update(long long node, long long start, long long end, long long idx, long long val) {
    if(start == end) {
        seg[node] = val;
    } else {
        long long mid = (start + end) / 2;
        if( idx <= mid) {
            update(2*node + 1, start, mid, idx, val);
        } else {
            update(2*node + 2, mid + 1, end, idx, val);
        }
        seg[node] = max(seg[2*node + 1], seg[2*node + 2]);
    }
}

long long main() {
    long long n, m;
    cin >> n >> m;
    for(long long i = 0; i < n; i++) {
        cin >> input[i];
    }
    build(0, 0, n - 1);
    for(long long i = 0; i < m; i++) {
        long long q;
        cin >> q;
        
        if(seg[0] < q) {
            cout << 0 << " ";
        } else {
            long long idx = query(0, 0, n - 1, q);
            cout << idx + 1 << " ";
            input[idx] -= q;
            update(0, 0, n - 1, idx, input[idx]);
        }
    }
    return 0;
}

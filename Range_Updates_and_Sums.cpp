#include<bits/stdc++.h>
using namespace std;

const long long INF = LLONG_MAX;

long long seg[800001]; 
long long lazyAdd[800001]; 
long long lazySet[800001]; 
bool isSet[800001]; 

void propagate(long long i, long long l, long long r) {
    if (isSet[i]) {
        seg[i] = (r - l + 1) * lazySet[i];
        if (l != r) {
            isSet[2 * i + 1] = isSet[2 * i + 2] = true;
            lazySet[2 * i + 1] = lazySet[2 * i + 2] = lazySet[i];
            lazyAdd[2 * i + 1] = lazyAdd[2 * i + 2] = 0;
        }
        lazySet[i] = INF;
        isSet[i] = false;
    }
    
    if (lazyAdd[i] != 0) {
        seg[i] += (r - l + 1) * lazyAdd[i];
        if (l != r) {
            if (!isSet[2 * i + 1]) {
                lazyAdd[2 * i + 1] += lazyAdd[i];
            } else {
                lazySet[2 * i + 1] += lazyAdd[i];
            }
            if (!isSet[2 * i + 2]) {
                lazyAdd[2 * i + 2] += lazyAdd[i];
            } else {
                lazySet[2 * i + 2] += lazyAdd[i];
            }
        }
        lazyAdd[i] = 0;
    }
}

void updateRangeAdd(long long start, long long end, long long i, long long l, long long r, long long val) {
    propagate(i, l, r);
    if (l > end || r < start) return;

    if (l >= start && r <= end) {
        seg[i] += (r - l + 1) * val;
        if (l != r) {
            if (!isSet[2 * i + 1]) {
                lazyAdd[2 * i + 1] += val;
            } else {
                lazySet[2 * i + 1] += val;
            }
            if (!isSet[2 * i + 2]) {
                lazyAdd[2 * i + 2] += val;
            } else {
                lazySet[2 * i + 2] += val;
            }
        }
        return;
    }

    long long mid = (l + r) / 2;
    updateRangeAdd(start, end, 2 * i + 1, l, mid, val);
    updateRangeAdd(start, end, 2 * i + 2, mid + 1, r, val);
    seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
}

void updateRangeSet(long long start, long long end, long long i, long long l, long long r, long long val) {
    propagate(i, l, r);
    if (l > end || r < start) return;

    if (l >= start && r <= end) {
        seg[i] = (r - l + 1) * val;
        if (l != r) {
            isSet[2 * i + 1] = isSet[2 * i + 2] = true;
            lazySet[2 * i + 1] = lazySet[2 * i + 2] = val;
            lazyAdd[2 * i + 1] = lazyAdd[2 * i + 2] = 0;
        }
        return;
    }

    long long mid = (l + r) / 2;
    updateRangeSet(start, end, 2 * i + 1, l, mid, val);
    updateRangeSet(start, end, 2 * i + 2, mid + 1, r, val);
    seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
}

long long querySum(long long start, long long end, long long i, long long l, long long r) {
    propagate(i, l, r);
    if (l > end || r < start) return 0;

    if (l >= start && r <= end) return seg[i];

    long long mid = (l + r) / 2;
    long long leftSum = querySum(start, end, 2 * i + 1, l, mid);
    long long rightSum = querySum(start, end, 2 * i + 2, mid + 1, r);
    return leftSum + rightSum;
}

void build(long long ind, long long low, long long high, vector<long long>& values) {
    if (low == high) {
        seg[ind] = values[low];
        return;
    }

    long long mid = (low + high) / 2;
    build(2 * ind + 1, low, mid, values);
    build(2 * ind + 2, mid + 1, high, values);
    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

long long main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> values(n);
    for (long long i = 0; i < n; i++) {
        cin >> values[i];
    }

    build(0, 0, n - 1, values);

    for (long long i = 0; i < q; i++) {
        long long type;
        cin >> type;
        if (type == 1) {
            long long a, b, c;
            cin >> a >> b >> c;
            a--; b--;
            updateRangeAdd(a, b, 0, 0, n - 1, c);
        } else if (type == 2) {
            long long a, b, c;
            cin >> a >> b >> c;
            a--; b--;
            updateRangeSet(a, b, 0, 0, n - 1, c);
        } else {
            long long a, b;
            cin >> a >> b;
            a--; b--;
            cout << querySum(a, b, 0, 0, n - 1) << endl;
        }
    }

    return 0;
}

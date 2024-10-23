
#include <bits/stdc++.h>
using namespace std;

long long n, m;
char mat[1001][1001];
char dir[1001][1001];
bool vis[1001][1001];
vector<char> path;

bool isvalid(long long x, long long y) {
    if (x < 0 || y < 0 || x >= n || y >= m) return false;
    if (mat[x][y] == '#' || vis[x][y] == true) return false;
    return true;
}

bool bfs(long long x, long long y) {
    queue<pair<long long, long long>> q;
    q.push({x, y});
    vis[x][y] = true;

    while (!q.empty()) {
        long long a = q.front().first;
        long long b = q.front().second;
        q.pop();

        if (mat[a][b] == 'B') {
            while (mat[a][b] != 'A') {
                path.push_back(dir[a][b]);
                if (dir[a][b] == 'L') b++;
                else if (dir[a][b] == 'R') b--;
                else if (dir[a][b] == 'D') a--;
                else if (dir[a][b] == 'U') a++;
            }
            reverse(path.begin(), path.end());
            return true;
        }

        if (isvalid(a, b - 1)) dir[a][b - 1] = 'L', q.push({a, b - 1}), vis[a][b - 1] = true;
        if (isvalid(a, b + 1)) dir[a][b + 1] = 'R', q.push({a, b + 1}), vis[a][b + 1] = true;
        if (isvalid(a - 1, b)) dir[a - 1][b] = 'U', q.push({a - 1, b}), vis[a - 1][b] = true;
        if (isvalid(a + 1, b)) dir[a + 1][b] = 'D', q.push({a + 1, b}), vis[a + 1][b] = true;
    }
    return false;
}

long long main() {
    cin >> n >> m;
    long long x, y;
    for (long long i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (long long j = 0; j < m; j++) {
            mat[i][j] = s[j];
            if (mat[i][j] == 'A') {
                x = i, y = j;
            }
        }
    }

    if (bfs(x, y) == true) {
        cout << "YES" << endl;
        cout << path.size() << endl;
        for (auto it : path) {
            cout << it;
        }
    } else {
        cout << "NO";
    }
}

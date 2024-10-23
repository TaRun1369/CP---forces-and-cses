#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

const int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

// BFS to find all connected components and their sizes
void bfsComponent(const vector<vector<int>>& grid, vector<vector<int>>& component, vector<int>& componentSize, int N, int M) {
    int compId = 0;
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                component[i][j] = compId;
                int size = 0;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();
                    size++;

                    for (const auto& dir : directions) {
                        int nx = x + dir[0];
                        int ny = y + dir[1];

                        if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && grid[nx][ny] == 1) {
                            visited[nx][ny] = true;
                            component[nx][ny] = compId;
                            q.push({nx, ny});
                        }
                    }
                }

                componentSize[compId] = size;
                compId++;
            }
        }
    }
}

// Function to process removals and calculate the number of fallen stones
vector<int> processRemovals(vector<vector<int>>& grid, const vector<pair<int, int>>& removals, vector<vector<int>>& component, vector<int>& componentSize, int N, int M) {
    vector<int> results;

    for (const auto& [r, c] : removals) {
        if (r >= N || c >= M || grid[r][c] == 0) {
            results.push_back(0);
            continue;
        }

        // Remove the stone
        int compId = component[r][c];
        grid[r][c] = 0;

        // Check connectivity to the top row
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        queue<pair<int, int>> q;

        for (int j = 0; j < M; ++j) {
            if (grid[0][j] == 1 && !visited[0][j]) {
                q.push({0, j});
                visited[0][j] = true;
            }
        }

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (const auto& dir : directions) {
                int nx = x + dir[0];
                int ny = y + dir[1];

                if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && grid[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        // Calculate the number of fallen stones
        int fallenStones = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    fallenStones++;
                }
            }
        }
        int fl = grid[r][c] != 1;
        results.push_back(fallenStones + fl);

        // Restore the stone for the next removal
        grid[r][c] = 1;
    }

    return results;
}

int main() {
    int N = 3, M = 3;
    vector<vector<int>> grid = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 1, 0}
    };

    vector<pair<int, int>> removals = {
        {1 ,1 },
        {0, 1},
        {2, 2}
    };

    vector<vector<int>> component(N, vector<int>(M, -1));
    vector<int> componentSize(10000, 0); // Adjust size based on the maximum number of components

    bfsComponent(grid, component, componentSize, N, M);

    vector<int> result = processRemovals(grid, removals, component, componentSize, N, M);
    
    // Output the results
    for (int count : result) {
        cout << count << endl;
    }

    return 0;
}

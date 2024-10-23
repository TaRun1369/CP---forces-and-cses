#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> seats(n);
    for(int i = 0; i < n; i++) {
        cin >> seats[i];
    }
    
    sort(seats.begin(), seats.end());
    
    // Find minimum moves required
    int min_moves = n;  // Maximum possible moves
    
    // For each possible starting position
    for(int start = max(0, seats[0] - n); start <= seats[n-1]; start++) {
        int curr_moves = 0;
        vector<bool> used(n, false);
        
        // Check how many current positions can be used
        for(int i = 0; i < n; i++) {
            int target = start + i;
            // Check if this target position already has a student
            for(int j = 0; j < n; j++) {
                if(!used[j] && seats[j] == target) {
                    used[j] = true;
                    goto next_pos;
                }
            }
            // If we get here, we need a move
            curr_moves++;
            next_pos:;
        }
        
        min_moves = min(min_moves, curr_moves);
    }
    
    cout << min_moves << endl;
    return 0;
}
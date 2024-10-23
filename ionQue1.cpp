#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to store task information
struct Task {
    long long send;
    long long receive;
    long long amount;
    long long max_capacity;
};

// Comparator function to sort tasks by max_capacity in descending order
bool compareTasks(const Task &a, const Task &b) {
    return a.amount > b.amount;
}

long long getMaxAmount(vector<long long> &send, vector<long long> &receive, vector<long long> &amount, vector<long long> &capacity) {
    long long n = send.size();
    long long m = capacity.size();
    
    // Create vector of tasks
    vector<Task> tasks(n);
    for (long long i = 0; i < n; ++i) {
        tasks[i] = {send[i], receive[i], amount[i], max(send[i], receive[i])};
    }

    sort(tasks.begin(), tasks.end(), compareTasks);



    sort(capacity.begin(), capacity.end());

    long long maxAmount = 0;

    for (const Task &task : tasks) {
        // Find the first server with enough capacity for this task
        auto it = lower_bound(capacity.begin(), capacity.end(), task.max_capacity);

        // If a suitable server is found
        if (it != capacity.end()) {
            maxAmount += task.amount;
            // Remove the server capacity used
            capacity.erase(it);
        }

        // If no servers left to handle more tasks, break the loop
        if (capacity.empty()) break;
    }

    return maxAmount;
}

// 2 4 5

// 7 6 4 2



long long main() {
    long long n, m;
    // cout << "Enter number of tasks (n) and number of servers (m): ";
    cin >> n >> m;

    vector<long long> send(n), receive(n), amount(n), capacity(m);

    // cout << "Ente/r send data for tasks: ";
    for (long long i = 0; i < n; ++i) cin >> send[i];
    
    // cout << "Enter receive data for tasks: ";
    for (long long i = 0; i < n; ++i) cin >> receive[i];
    
    // cout << "Enter amount for tasks: ";
    for (long long i = 0; i < n; ++i) cin >> amount[i];
    
    // cout << "Enter capacities of servers: ";
    for (long long i = 0; i < m; ++i) cin >> capacity[i];


    long long maxAmount = getMaxAmount(send, receive, amount, capacity);
    // cout << "Maximum amount that can be obtained: " << maxAmount << endl;
    cout<<maxAmount<<endl;
    return 0;
}




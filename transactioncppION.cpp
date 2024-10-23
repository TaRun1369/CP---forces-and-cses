// User function Template for C++
class Solution {
public:
    vector<vector<long long>> minCashFlow(vector<vector<long long>> &transaction, long long n) {
        vector<long long> net(n, 0);
        
        // Calculate net amount for each person
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                net[i] += (transaction[j][i] - transaction[i][j]);
            }
        }
        
        // Process the net amounts to minimize transactions
        vector<vector<long long>> result(n, vector<long long>(n, 0));
        
        while (true) {
            // Find the person with the maximum credit (positive net amount)
            long long maxCredit = distance(net.begin(), max_element(net.begin(), net.end()));
            // Find the person with the maximum debit (negative net amount)
            long long maxDebit = distance(net.begin(), min_element(net.begin(), net.end()));
            
            // If all amounts are settled
            if (net[maxCredit] == 0 && net[maxDebit] == 0) break;
            
            // Find the minimum of the maximum credit and debit
            long long minAmount = min(net[maxCredit], -net[maxDebit]);
            
            // Reduce the amounts from the respective persons
            net[maxCredit] -= minAmount;
            net[maxDebit] += minAmount;
            
            // Record the transaction
            result[maxDebit][maxCredit] = minAmount;
        }
        
        return result;
    }
};
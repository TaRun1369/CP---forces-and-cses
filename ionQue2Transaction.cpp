
#include <iostream>
#include <queue>

using namespace std;

// Comparator that will be used to make priority_queue
// containing pair of long longegers maxHeap Comparison is based
// on second entry in the pair which represents cash
// credit/debit
struct AscCmp {
    bool operator()(const pair<long long, long long>& p1,
                    const pair<long long, long long>& p2)
    {
        return p1.second < p2.second;
    }
};

// Comparator that will be used to make priority_queue
// containing pair of long longegers minHeap Comparison is based
// on second entry in the pair which represents cash
// credit/debit
struct DscCmp {
    bool operator()(const pair<long long, long long>& p1,
                    const pair<long long, long long>& p2)
    {
        return p1.second > p2.second;
    }
};

class Solution {
private:
    // Below priority queues will be used as min_heap (minQ)
    // and max_heap (maxQ) First entry in the pair will be
    // person id Second entry in the pair will be cash
    // debit/credit for the same person
    priority_queue<pair<long long, long long>, vector<pair<long long, long long> >,
                   DscCmp>
        minQ;
    priority_queue<pair<long long, long long>, vector<pair<long long, long long> >,
                   AscCmp>
        maxQ;

    // This function will fill in minQ and maxQ in such a
    // way that maxQ will have only positive value. minQ
    // will have only negative value amount is taken as
    // input. amount[i] => cash credit/debit to/from person
    // i amount[i] == 0 will be ignored as no credit/debit
    // is left.
    void constructMinMaxQ(const vector<long long>& amount)
    {
        for (long long i = 0; i < amount.size(); ++i) {
            if (amount[i] == 0)
                continue;
            if (amount[i] > 0) {
                maxQ.emplace(i, amount[i]);
            }
            else {
                minQ.emplace(i, amount[i]);
            }
        }
    }

    // This function will iterate over minQ and maxQ until
    // empty. It will fetch max credit and min debit. If sum
    // of both is not equal to zero, then push remaining
    // credit or debit back to the required queue. At the
    // end of the loop, prlong long result
    void solveTransaction()
    {
        while (!minQ.empty() && !maxQ.empty()) {
            pair<long long, long long> maxCreditEntry = maxQ.top();
            maxQ.pop();

            pair<long long, long long> maxDebitEntry = minQ.top();
            minQ.pop();

            // Get the remaining transaction value by adding
            // credit and debit cash
            long long transaction_val = maxCreditEntry.second
                                  + maxDebitEntry.second;

            long long debtor = maxDebitEntry.first,
                creditor = maxCreditEntry.first,
                owed_amount = 0;

            if (transaction_val == 0) {
                // credit and debit cash for this person is
                // cancelled out
                owed_amount = maxCreditEntry.second;
            }
            else if (transaction_val < 0) {
                // transaction_val is the debit cash which
                // is remaining, so push to the queue for
                // further processing
                owed_amount = maxCreditEntry.second;
                minQ.emplace(maxDebitEntry.first,
                             transaction_val);
            }
            else {
                // transaction_val is the credit cash which
                // is remaining, so push to the queue for
                // further processing
                owed_amount = -(maxDebitEntry.second);
                maxQ.emplace(maxCreditEntry.first,
                             transaction_val);
            }

            // Prlong long result
            cout << "Person " << debtor << " pays "
                 << owed_amount << " to Person " << creditor
                 << endl;
        }
    }

public:
    void minCashFlow(const vector<vector<long long> >& graph)
    {
        long long n = graph.size();

        // Calculate the cash to be credited/debited to/from
        // each person and store in vector amount
        vector<long long> amount(n, 0);
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                long long diff = graph[j][i] - graph[i][j];
                amount[i] += diff;
            }
        }

        // Fill in both queues minQ and maxQ using amount
        // vector
        constructMinMaxQ(amount);

        // Solve the transaction using minQ, maxQ and amount
        // vector
        solveTransaction();
    }
};

long long main()
{
    // Test case 1
    vector<vector<long long> > graph = {
        { 0, 1000, 2000 },
        { 0, 0, 5000 },
        { 0, 0, 0 },
    };

    cout << "Solution 1 : " << endl;
    Solution S;
    S.minCashFlow(graph);

    // Test case 2
    vector<vector<long long> > graph2 = { { 2, 63, 0, 85, 49 },
                                    { 0, 76, 0, 0, 27 },
                                    { 0, 0, 0, 17, 0 },
                                    { 73, 32, 50, 6, 71 },
                                    { 0, 86, 0, 0, 10 }

    };

    cout << "Solution 2 : " << endl;
    Solution S2;
    S2.minCashFlow(graph2);
    return 0;
}
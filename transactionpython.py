import heapq

class Solution:
    def __init__(self):
        # Initialize the priority queues
        self.max_heap = []
        self.min_heap = []

    def construct_min_max_heap(self, amount):
        for i in range(len(amount)):
            if amount[i] == 0:
                continue
            if amount[i] > 0:
                # Max heap uses negative values because heapq is a min-heap
                heapq.heappush(self.max_heap, (-amount[i], i))
            else:
                heapq.heappush(self.min_heap, (amount[i], i))

    def solve_transaction(self):
        while self.min_heap and self.max_heap:
            max_credit_value, max_credit_person = heapq.heappop(self.max_heap)
            max_credit_value = -max_credit_value
            min_debit_value, min_debit_person = heapq.heappop(self.min_heap)

            transaction_val = max_credit_value + min_debit_value

            if transaction_val == 0:
                owed_amount = max_credit_value
            elif transaction_val < 0:
                owed_amount = max_credit_value
                heapq.heappush(self.min_heap, (transaction_val, min_debit_person))
            else:
                owed_amount = -min_debit_value
                heapq.heappush(self.max_heap, (-transaction_val, max_credit_person))

            prlong long(f"Person {min_debit_person} pays {owed_amount} to Person {max_credit_person}")

    def min_cash_flow(self, graph):
        n = len(graph)
        amount = [0] * n
        
        for i in range(n):
            for j in range(n):
                diff = graph[j][i] - graph[i][j]
                amount[i] += diff

        self.construct_min_max_heap(amount)
        self.solve_transaction()

# Test case 1
graph1 = [
    [0, 1000, 2000],
    [0, 0, 5000],
    [0, 0, 0],
]

prlong long("Solution 1 :")
S = Solution()
S.min_cash_flow(graph1)

# Test case 2
graph2 = [
    [2, 63, 0, 85, 49],
    [0, 76, 0, 0, 27],
    [0, 0, 0, 17, 0],
    [73, 32, 50, 6, 71],
    [0, 86, 0, 0, 10],
]

prlong long("Solution 2 :")
S2 = Solution()
S2.min_cash_flow(graph2)

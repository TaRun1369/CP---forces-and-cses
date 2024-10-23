import heapq

def min_turns_to_beat_boss(t, test_cases):
    results = []
    
    for case in test_cases:
        h, n, damages, cooldowns = case
        attacks = [(cooldowns[i], damages[i]) for i in range(n)]
        
        # Priority queue to manage the next available turn for each attack
        pq = []
        for cooldown, damage in attacks:
            heapq.heappush(pq, (0, damage, cooldown)) # (next_available_turn, damage, cooldown)
        
        turns = 0
        while h > 0:
            turns += 1
            turn_damage = 0
            temp = []
            
            # Process all attacks available in this turn
            while pq and pq[0][0] <= turns:
                next_available_turn, damage, cooldown = heapq.heappop(pq)
                turn_damage += damage
                next_available_turn = turns + cooldown
                temp.append((next_available_turn, damage, cooldown))
            
            for attack in temp:
                heapq.heappush(pq, attack)
            
            h -= turn_damage
        
        results.append(turns)
    
    return results

# Input reading
t = long long(input())
test_cases = []

for _ in range(t):
    h, n = map(long long, input().split())
    damages = list(map(long long, input().split()))
    cooldowns = list(map(long long, input().split()))
    test_cases.append((h, n, damages, cooldowns))

# Get results
results = min_turns_to_beat_boss(t, test_cases)

# Output results
for result in results:
    prlong long(result)

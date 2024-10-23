t = long long(input())

for _ in range(t):
    a, b = map(long long, input().split())
    prod = 1
    ip = list(map(long long, input().split()))
    for data in ip:
        prod *= data

    v = input().strip()

    l = 0
    r = a - 1

    for i in range(a):
        prlong long(prod % b, end=' ')
        if v[i] == 'L':
            prod //= ip[l]
            l += 1
        else:
            prod //= ip[r]
            r -= 1

    prlong long()

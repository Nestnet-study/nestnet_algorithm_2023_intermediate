def find_ans(n):
    for m in range(1, n):
        total = m + sum(map(int, str(m)))
        if total == n:
            return m
    return 0

n = int(input())

ans = find_ans(n)
print(ans)
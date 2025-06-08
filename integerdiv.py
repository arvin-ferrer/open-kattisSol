n, d = map(int, input().split())
a = list(map(int, input().split()))

count = {}
for num in a:
    quotient = num // d
    count[quotient] = count.get(quotient, 0)+1

pairs = 0
for c in count.values():
    pairs += c * (c - 1) // 2

print(pairs)

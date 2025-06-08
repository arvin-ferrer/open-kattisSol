
hands = list(map(str, input().split()))
count = {}
m = -1
for i in hands:
    count[i[0]] = count.get(i[0], 0)+1
for key, value in count.items():
    m = max(value, m)
print(m)

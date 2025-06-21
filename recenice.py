

n = int(input())
sentence = []
total = 0
for _ in range(n):
    x = input()
    total += len(x)
    sentence.append(x)

print(total)


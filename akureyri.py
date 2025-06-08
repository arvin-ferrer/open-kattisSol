
x = int(input())

hashmap = {}
for i in range(1, (2*x)+1):
    s = input()
    if i % 2 == 0:
        if s in hashmap:
            hashmap[s] += 1
        else:
            hashmap[s] = 1

for key, value in hashmap.items():
    print(key, value);
    





names = []
n = int(input())
for i in range(n):
    s = input()
    names.append(s)
new = {}
for idx, name in enumerate(names):
    for j in name:
        if j.isupper():
            new[idx] = ord(j)
            
            break
# ssorted = dict(sorted(new.items(), key=lambda x:x[1]))
print()
sorted(names, key=str.upper)
print(names)
# for key in ssorted.keys():
    # print(names[key])

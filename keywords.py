
tt = int(input())
x = set()
count = 0
for i in range(tt):
    s = input()
    s1 = s.replace("-", " ")
    if s1.lower() not in x:
        
        x.add(s1.lower())
print(len(x))

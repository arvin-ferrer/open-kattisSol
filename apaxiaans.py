
x = input("")

word = ""
if len(x) == 1:
    print(x)
else:
    for i in range(len(x)-1):
        if x[i] != x[i+1]:
            word += x[i]
        if i == len(x)-2:
            if x[i] != x[i+1]:
                word += x[i+1]
            else:
                word+= x[i]

    #z.append(x[i])
    print(word)

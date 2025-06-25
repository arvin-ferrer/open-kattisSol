def solve(array):
    x = sorted(array)
    result = []
    i = 0

    while i < len(x):
        start = x[i]
        while i + 1 < len(x) and x[i + 1] == x[i] + 1:
            i += 1
        end = x[i] + 1
        if end - start > 1:
            result.append([start,end-1])
        else:
            result.append(start)
        i += 1
    for val in result:
        if type(val) == list:
            if val[1] - val[0] == 1:
                print(val[0], val[1], end = " ")
            else:
                print(str(val[0])+'-'+str(val[1]), end=" ")
        else:
            print(val, end=" ")
n = input()
array = list(map(int, input().split()))
solve(array)
                

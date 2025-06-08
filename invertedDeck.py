def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    sorted_arr = sorted(arr)
    
    for i in range(n):
        for j in range(i, n):
            new_arr = arr[:i] + arr[i:j+1][::-1] + arr[j+1:]
            if new_arr == sorted_arr:
                print(f"{i+1} {j+1}")
                return
    print("impossible")
solve()


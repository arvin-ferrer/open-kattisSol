from math import gcd

def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        nums = list(map(int, input().split()))
        
        m = 0
        prev_gcds = {}
        for num in nums:
            current_gcds = {}
            current_gcds[num] = 1
            for g in prev_gcds:
                new_gcd = gcd(g, num)
                new_length = prev_gcds[g] + 1
                current_gcds[new_gcd] = max(current_gcds.get(new_gcd, 0), new_length)
            current_max = 0
            for g, length in current_gcds.items():
                current_max = max(current_max, g * length)
            m = max(m, current_max)
            prev_gcds = current_gcds
        
        print(m)
main()


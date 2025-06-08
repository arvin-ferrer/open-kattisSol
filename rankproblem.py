

n = list(map(int, input().split()))
teams = []
for i in range(1, n[0]+1):
    teams.append("T"+str(i))

for i in range(n[1]):
    team = list(map(str, input().split()))
    idx1 = teams.index(team[0])
    idx2 = teams.index(team[1])
    if idx1 > idx2:
        teams.insert(idx1+1, team[1])
        teams.pop(teams.index(team[1]))
for i in teams:
    print(i, end=" ")

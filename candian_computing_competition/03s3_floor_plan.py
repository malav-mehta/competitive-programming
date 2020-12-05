from sys import stdin
input = stdin.readline

flooring, rows, cols = [int(input()) for _ in range(3)]
room = ans = 0

plan = []
rooms = []

for _ in range(rows):
    plan.append(list(input().strip()))

def dfs(i, j):
    global room
    global plan

    if 0 <= i < rows and 0 <= j < cols and plan[i][j] == '.':
        room += 1
        plan[i][j] = 'I'

        for dx, dy in ((0, 1), (0, -1), (1, 0), (-1, 0)):
            dfs(i + dx, j + dy)

for r in range(rows):
    for c in range(cols):
        if plan[r][c] == '.':
            room = 0
            dfs(r, c)
            rooms.append(room)

rooms.sort(reverse=True)
for room in rooms:
    if flooring - room >= 0:
        flooring -= room
        ans += 1
    else:
        break

print(ans, 'room,' if ans == 1 else 'rooms,', flooring, 'square metre(s) left over')

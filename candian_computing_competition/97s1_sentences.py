n = int(input())

for i in range(n):
    a, b, c = [int(input()) for _ in range(3)]
    a = [input() for _ in range(a)]
    b = [input() for _ in range(b)]
    c = [input() for _ in range(c)]

    for x in a:
        for y in b:
            for z in c:
                print(x, y, z + '.')

data = [list(line.strip()) for line in open("input/day3.txt", "r").readlines()]

def solve(data):

    def c(di, dj):
        i = j = ans = 0
        while i < len(data) - 1:
            i += di
            j += dj
            ans += data[i][j % len(data[0])] == '#'
        return ans
    
    p1 = p2 = c(1, 3)
    for d in (1, 1), (1, 5), (1, 7), (2, 1):
        p2 *= c(*d)
    
    return p1, p2

p1, p2 = solve(data)
print("Part 1: %d" % p1)
print("Part 2: %d" % p2)

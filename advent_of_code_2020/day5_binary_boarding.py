data = [line[:-1] for line in open("input/day5.txt", "r").readlines()]

def solve(data):
    mx = float('-inf')
    mn = float('inf')
    s = set()
    for code in data:
      code = code.replace('F', '0').replace('B', '1').replace('R', '1').replace('L', '0')
      row = int(code[:7], 2)
      col = int(code[7:], 2)

      score = row * 8 + col
      mx = max(score, mx)
      mn = min(score, mn)
      s.add(score)
    
    for i in range(mx, mn-1, -1):
      if i not in s:
        return mx, i

p1, p2 = solve(data)
print("Part 1: %d" % p1)
print("Part 2: %d" % p2)

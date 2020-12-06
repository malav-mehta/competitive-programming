data = open("input/day6.txt", "r").read()

def solve(data):
    p1 = sum([len(group) for group in [set(group.replace('\n', '')) for group in data.split('\n\n')]])
    p2 = sum([len(set.intersection(*member)) for member in [[set(member) for member in group.split('\n')] for group in data.split('\n\n')]])
    return p1, p2

p1, p2 = solve(data)
print("Part 1: %d" % p1)
print("Part 2: %d" % p2)

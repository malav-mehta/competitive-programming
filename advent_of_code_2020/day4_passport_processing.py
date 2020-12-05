import re

with open('input/day4.txt') as f:
    data = f.read()[:-1]

def solve(data):
    keys = ['byr', 'iyr', 'eyr', 'hgt', 'hcl', 'ecl', 'pid']
    passwords = data.split('\n\n')
    p1 = p2 = 0

    for password in passwords:
        fields = re.split('[\n ]', password)
        d = dict(field.split(':') for field in fields)
        
        if all(key in d for key in keys):
            p1 += 1
            
            if 1920 <= int(d['byr']) <= 2002\
                    and 2010 <= int(d['iyr']) <= 2020\
                    and 2020 <= int(d['eyr']) <= 2030\
                    and re.match(r'\d+..', d['hgt'])\
                    and (d['hgt'].endswith('cm') and 150 <= int(d['hgt'][:-2]) <= 193 or d['hgt'].endswith('in') and 59 <= int(d['hgt'][:-2]) <= 76)\
                    and re.match(r'^#[\da-f]{6}$', d['hcl'])\
                    and d['ecl'] in ['amb', 'blu', 'brn', 'gry', 'grn', 'hzl', 'oth']\
                    and re.match(r'^\d{9}$', d['pid']):
                p2 += 1
    
    return p1, p2

p1, p2 = solve(data)
print("Part 1: %d" % p1)
print("Part 2: %d" % p2)
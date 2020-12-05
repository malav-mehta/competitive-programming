class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        if n == 0:
            return '0'

        s = '0'

        for _ in range(n - 1):
            s = s + '1' + s.replace('0', '#').replace('1',
                                                      '0').replace('#', '1')[::-1]

        return s[k - 1]

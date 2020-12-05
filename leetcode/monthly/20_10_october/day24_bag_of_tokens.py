class Solution:
    def bagOfTokensScore(self, tokens: List[int], P: int) -> int:
        r = c = 0
        d = collections.deque(sorted(tokens))
        while d and (c or d[0] <= P):
            if d[0] <= P:
                P -= d.popleft()
                c += 1
            else:
                P += d.pop()
                c -= 1
            r = max(r, c)
        return r

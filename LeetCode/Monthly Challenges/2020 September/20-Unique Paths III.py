class Solution:
    def uniquePathsIII(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])
        no = sr = sc = p = 0
        for i in range(rows):
            for j in range(cols):
                c = grid[i][j]
                if c >= 0: no += 1
                if c == 1: sr, sc = i, j
        def backtrack(r, c, rem):
            nonlocal p
            if grid[r][c] == 2 and rem == 1:
                p += 1
                return
            t = grid[r][c]
            grid[r][c] = -4
            rem -= 1
            for dr, dc in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                nr, nc = r + dr, c + dc
                if not (0 <= nr < rows and 0 <= nc < cols): continue
                if grid[nr][nc] < 0: continue
                backtrack(nr, nc, rem)
            grid[r][c] = t            
        backtrack(sr, sc, no)
        return p
        

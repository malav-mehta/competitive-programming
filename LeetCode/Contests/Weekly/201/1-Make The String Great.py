class Solution:
    def makeGood(self, s: str) -> str:
        last = False

        while True:
            f = False

            i = 0
            while i < len(s) - 2:
                if (ord(s[i]) - 97 == ord(s[i + 1]) - 65) or (ord(s[i]) - 65 == ord(s[i + 1]) - 97):
                    f = True
                    s = s[:i] + s[i+2:]

                else:
                    i += 1

            if len(s) > 2:
                r = s[-2:]
                if (ord(r[0]) - 97 == ord(r[1]) - 65) or (ord(r[0]) - 65 == ord(r[1]) - 97):
                    f = True
                    s = s[:-2]

            elif len(s) == 2:
                if (ord(s[0]) - 97 == ord(s[1]) - 65) or (ord(s[0]) - 65 == ord(s[1]) - 97):
                    s = ""

                break

            elif len(s) == 1:
                break

            if not f:
                break

        return s

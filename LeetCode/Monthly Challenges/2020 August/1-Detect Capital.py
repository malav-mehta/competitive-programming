class Solution :
    def detectCapitalUse(self, word: str) -> bool:
    if word == word.upper() or word == word.lower():
        return True

        if word:
            if word[0].isupper():
                for c in word[1:]:
                    if c.isupper():
                        return False

                        return True

                        return False

                        return False

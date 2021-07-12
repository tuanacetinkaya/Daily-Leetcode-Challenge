class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        match = {}
        second_letters_set = set()
        match_count = 0
        for i in range(len(s)):
            if s[i] not in match and t[i] not in second_letters_set:
                match[s[i]] = t[i]
                second_letters_set.add(t[i])
            else:
                if s[i] not in match:
                    return False
                if match[s[i]] != t[i]:
                    return False
        return True

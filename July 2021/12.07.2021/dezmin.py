class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        char_dict = {}
        n = len(s)
        for i in range(n):
            if s[i] in char_dict.keys():
                if char_dict[s[i]] != t[i]:
                    return False
            else:
                if t[i] in char_dict.values():
                    return False
                char_dict[s[i]] = t[i]
        return True

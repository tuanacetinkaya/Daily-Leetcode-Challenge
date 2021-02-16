class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_dict = dict()
        
        if len(s) != len(t):
            return False
        
        for c in s:
            if c in s_dict.keys():
                s_dict[c] += 1
            else:
                s_dict[c] = 1
                
        for c in t:
            if c not in s_dict.keys() or s_dict[c] == 0:
                print(c)
                return False
            else:
                s_dict[c] -= 1
        
        return True

        
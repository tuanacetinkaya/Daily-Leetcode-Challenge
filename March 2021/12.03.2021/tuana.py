class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        src = dict()
        for i in range(2**k):
            binary = "{0:b}".format(i)
            filler = "0"* (k-len(binary)) + binary
            src[filler] = False
            
        for i in range(len(s)-k+1):
            if s[i: i+k] in src.keys():
                src[s[i: i+k]] = True
        return True if all(src.values()) else False
                    

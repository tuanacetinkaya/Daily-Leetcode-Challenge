class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        a = True
        for i in range(2**k):
            binary = bin(i)[2:]
            if binary.zfill(k) in s:
                continue
            return False
        return True

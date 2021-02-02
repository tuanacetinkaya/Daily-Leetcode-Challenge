# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        if isBadVersion(n) and not isBadVersion(n-1):
            return n
        if n <= 1000:
            for j in range(n+1):
                if isBadVersion(j):
                    return j
        n = int(n/1000)
        asd = n
        value = 0
        for i in range(1,1000):
            value = n
            n += asd
            if isBadVersion(n):
                break
        for j in range(value,n+1):
            if isBadVersion(j):
                return j
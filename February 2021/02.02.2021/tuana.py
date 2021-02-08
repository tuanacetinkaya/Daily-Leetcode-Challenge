# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        #track the versions to decrease the API calls
        version = {
            -1: False,
            0 : False
        }
        
        
        #when we find a bad version we know the left of the versions are cancelled 
        #all versions are bad after the first one
        low = 0
        hi = n
        # let's make a binary search shall we
        while True:
            v = (hi + low) // 2 #midpoint
            
            
            if v in version.keys():
                bad = version[v]
            else:
                bad = isBadVersion(v)
                version[v] = bad
            if v-1 in version.keys():
                past = version[v-1]
            else:
                past = isBadVersion(v-1)
                version[v-1] = past
            if v+1 in version.keys():
                nxt = version[v+1]
            else:
                nxt = isBadVersion(v+1)
                version[v+1] = nxt
                
                
            if bad and not past:
                break
            elif not bad and nxt:
                v+=1
                break
            elif bad:
                hi = v
            elif not bad:
                low = v
        return v
            
            

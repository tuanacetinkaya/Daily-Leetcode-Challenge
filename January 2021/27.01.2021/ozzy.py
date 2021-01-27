class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        sum=0
        for i in range(1,len(arr)+1,2):
            for j in range(0,len(arr)-i+1):
                for x in arr[j:j+i]:
                    sum=sum+x
        return sum

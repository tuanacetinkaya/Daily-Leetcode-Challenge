class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        arr = []
        a = True
        b = True
        for i in range(0,len(nums)):
            if a:
                if nums.count(i+1) == 2:
                    arr.insert(0,i+1)
                    a = False
            if b:
                if not nums.__contains__(i+1):
                    arr.append(i+1)
                    b = False
            if len(arr) == 2:
                break
        return arr
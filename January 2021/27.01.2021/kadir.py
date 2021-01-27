class Solution:
    def balancedStringSplit(self, s: str) -> int:
        sum_of_L, sum_of_R, i, ans= 0,0,0,0
        while i < len(s):
            if s[i] == 'L':
                sum_of_L +=1
            else:
                sum_of_R +=1
            if sum_of_L == sum_of_R:
                ans +=1
                sum_of_R = 0
                sum_of_L = 0
            i +=1
        return ans
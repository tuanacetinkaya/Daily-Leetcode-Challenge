class Solution:
    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
        a = False
        for i in range(0,len(arr)-m):
            t=1
            for j in range(1,k):
                if arr[i:i+m] == arr[i+(m*j):i+(m*j)+m]:
                    t+=1
            if t >= k:
                a = True
        return a
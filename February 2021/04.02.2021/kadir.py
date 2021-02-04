class Solution:
    def addBinary(self, a: str, b: str) -> str:
        ans = ""
        number = len(a)
        if len(b) > len(a):
            number = len(b)
        excess = False
        for i in range(1,number+1):
            if i > len(a) or i > len(b):
                if i <= len(a):
                    temp = int(a[(-1)*i])
                else:
                    temp = int(b[(-1)*i])
            else:
                temp = int(a[(-1)*i]) + int(b[(-1)*i])
            if excess:
                temp += 1
            if temp%2==0:
                ans = "0"+ans
                if temp == 0:
                    excess = False
                else:
                    excess = True
            elif temp == 1:
                ans = "1"+ans
                excess = False
            else:
                ans = "1"+ans
                excess = True
        if excess:
            ans = "1"+ ans
        return ans
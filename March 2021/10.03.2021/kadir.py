class Solution:
    def intToRoman(self, num: int) -> str:
        ans = ""
        a = True
        numbers = [1000, 500, 100, 50, 10, 5, 1]
        romans = ['M', 'D', 'C', 'L', 'X', 'V', 'I']
        for i in range(len(numbers)):
            if i%2==0:
                a = True
            else:
                a = False
            if a:
                if(num / numbers[i]) >= 4:
                    ans += romans[i] + romans[i-1]
                    num -= numbers[i]*int(num / numbers[i])
                elif(num / numbers[i]) >= 1:
                    ans += romans[i]*int(num / numbers[i])
                    num -= numbers[i] * int(num / numbers[i])
            else:
                if(num / numbers[i]) >= 1.8:
                    ans += romans[i+1] + romans[i-1]
                    num -= numbers[i+1]*int(num / numbers[i+1])
                elif(num / numbers[i]) >= 1:
                    ans += romans[i] + romans[i+1]*int((num-numbers[i])/numbers[i+1])
                    num -= numbers[i+1]*int(num / numbers[i+1])
        return ans

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sayi=str(n)
        mul=1
        sum=0
        if n==0:
            return 0
        for x in sayi:
            mul=mul*int(x)
            sum=sum+int(x)
        return (mul-sum)

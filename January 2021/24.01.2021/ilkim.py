class Solution:
    def subtractProductAndSum(self, x: int) -> int:
        x = str(x)
        str_list = list(x)
        int_list = [int(i) for i in str_list]
        print(int_list)
        sum = 0
        product = 1
        for j in int_list:
            sum += j
            product = product * j
        out = product - sum
        return out

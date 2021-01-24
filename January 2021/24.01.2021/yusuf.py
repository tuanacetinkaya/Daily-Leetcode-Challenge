class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        
        product_of_digits = 1           # 1 * digits
        sum_of_digits = 0               # 0 + digits

        for i in str(n):                # int(i) is current digit       
            sum_of_digits += int(i)     
            product_of_digits *= int(i)

        return product_of_digits - sum_of_digits
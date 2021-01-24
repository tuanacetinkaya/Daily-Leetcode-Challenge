class Solution:
    def subtractProductAndSum(self, num: int) -> int:
        product_digits, sum_digits = 1, 0
        while num != 0:
            digit = num % 10
            product_digits *= digit
            sum_digits += digit
            num -= digit
            num = num // 10
        return product_digits - sum_digits
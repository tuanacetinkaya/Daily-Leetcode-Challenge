class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        pod = 1
        sod = 0
        n = str(n)
        for i in n:
            pod *= int(i)
            sod += int(i)
        return pod - sod
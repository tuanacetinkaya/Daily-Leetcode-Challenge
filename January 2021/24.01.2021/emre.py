class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        pod = 1
        sod = 0
        number = str(n)
        for c in number:
            sod +=  int(c)
            pod *= int(c)
        return pod - sod

class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        n = len(arr)
        del_amount = dict()
        for i in range(n):
            if arr[i] in del_amount.keys():
                del_amount[arr[i]] += 1
            else:
                del_amount[arr[i]] = 1
        
        vals = sorted(del_amount.values(), reverse=True)
        count, total = 0, 0
        for i in range(len(vals)):
            count += 1
            total += vals[i]
            if total >= n // 2:
                break
        
        return count

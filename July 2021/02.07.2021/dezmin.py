class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        n = len(arr)
        dist_arr = [0] * n
        for i in range(n):
            dist_arr[i] = abs(arr[i] - x)
        
        no_up, no_down = True, True
        
        # find the shape of array
        for i in range(1, n):
            if dist_arr[i] > dist_arr[i - 1]:
                no_up = False
            elif dist_arr[i] < dist_arr[i - 1]:
                no_down = False

        if (no_down and no_up) or (no_down and not no_up):
            return arr[:k]
        else:
            last_down = -1
            for i in range(1, n):
                if dist_arr[i] < dist_arr[i - 1]:
                    last_down = i

            if no_up:
                range_start = last_down if last_down + k < n else max(n - k, 0)
                return arr[range_start:min(last_down + k, n)]
            range_start = max(last_down - k + 1, 0)
            range_end = last_down if last_down >= k else last_down + (k - last_down - 1)
            
            for i in range(1, k):
                if range_end == n-1:
                    break
                if dist_arr[range_start] > dist_arr[range_end + 1]:
                    range_start += 1
                    range_end += 1
                else:
                    break
                    
            
            return arr[range_start: range_end + 1]

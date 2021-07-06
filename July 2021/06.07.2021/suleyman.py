class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        _map = {}
        
        for num in arr:
            if num in _map:
                _map[num] += 1
            else:
                _map[num] = 1
        
        total = 0
        counter = 0
        for key in sorted(_map, key=_map.get, reverse=True):
            total += _map[key]
            counter += 1
            if total >= (len(arr) / 2):
                return counter

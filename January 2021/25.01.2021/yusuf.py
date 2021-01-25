class Solution:
    def balancedStringSplit(self, input_string: str) -> int:
        r_count = 0
        output = 0
        for char in input_string:
            if char == 'R':
                r_count += 1
            else:
                r_count -= 1
            if r_count == 0:
                output += 1
        return output

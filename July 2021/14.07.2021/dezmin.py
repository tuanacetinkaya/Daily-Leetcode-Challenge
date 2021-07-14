class Solution:
    def customSortString(self, order: str, str_input: str) -> str:
        char_dict = {}
        for c in str_input:
            if c in char_dict.keys():
                char_dict[c] += 1
            else:
                char_dict[c] = 1
        
        output = ""
        for c in order:
            if c in char_dict.keys():
                output += c * char_dict[c]
                del char_dict[c]
        for c in char_dict.keys():
            output += char_dict[c] * c
        
        return output

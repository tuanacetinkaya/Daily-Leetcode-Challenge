class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        set_binary = set()
        
        str_temp = ""
        for elem in s:
            if len(str_temp) == k:
                set_binary.add(str_temp)
                str_temp = str_temp[1:]
            
            str_temp += elem
        
        set_binary.add(str_temp)

        return len(set_binary) == 2 ** k
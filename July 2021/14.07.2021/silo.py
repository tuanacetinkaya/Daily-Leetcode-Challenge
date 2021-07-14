class Solution:
    def customSortString(self, order: str, stri: str) -> str:
        freq = {}
        for i in range(len(stri)):
            if stri[i] in freq:
                freq[stri[i]] += 1
            else:
                freq[stri[i]] = 1
        
        output = ""
        
        for letter in order:
            if letter in freq:
                output += letter * freq[letter]
                del freq[letter]
        
        for key,value in freq.items():
            output += key * value
        return output

class Solution:
            
    def minimumLengthEncoding(self, words: List[str]) -> int:
        word_set = set(words)
        n = len(word_set)
        
        for word in words:
            for word_i in range(1, len(word)):
                if word[word_i:] in word_set:                   
                    word_set.remove(word[word_i:])
        ans = 0
        for word in word_set:
            ans += len(word) + 1
        
        return ans
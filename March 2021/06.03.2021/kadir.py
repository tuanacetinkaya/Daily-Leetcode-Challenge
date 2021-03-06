class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        mylist = []
        for i in range(len(words)):
            a = False
            minWord = min(words, key=len)
            words.remove(minWord)
            for word in words:
                if minWord == word[(-1*len(minWord)):]:
                    a = True
                    break
            if not a:
                mylist.append(minWord)
        return len("#".join(mylist))+1

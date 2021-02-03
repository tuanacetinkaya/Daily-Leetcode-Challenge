class Solution:
    def countLargestGroup(self, n: int) -> int:
        mylist = []
        for i in range(1,9*len(str(n))+1):
            mylist.append(0)
        for j in range(1,n+1):
            temp = 0
            for k in str(j):
                temp+=int(k)
            mylist[temp-1] = mylist[temp-1]+1
        return mylist.count(max(mylist))
class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        countList = []
        total = 0
        for i in range(len(arr)):
            #extract all zeros in list and remove one from the rest]
            tempList = []
            for j in range(len(countList)):
                if countList[j] > 1:
                    tempList.append(countList[j] - 1)
            countList = tempList
                
                #add the possible values to list
            for p in range(1, (len(arr)+1) - i, 2): #1, 3, 5
                countList.append(p)
            total += len(countList) * arr[i]
            
        return total

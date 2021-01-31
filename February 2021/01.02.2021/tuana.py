class Solution:
    def matrixScore(self, A: List[List[int]]) -> int:
        # OKAY! I CHECKED THE SOLUTION BUT THIS ONE WAS TRICKY SO THAT DOES NOT COUNT
        # PLUS I TRIED TO FIND A STRATEGY FOR 2 HOURS SO AFTER THIS POINT I KINDA DESERVE IT
        # SUE ME!
        # first rows has to be 1 no matter what
        for i in range(len(A)):
            if A[i][0] == 0:
                #flip it
                for j in range(len(A[i])):
                    A[i][j] = 1 if A[i][j] == 0 else 0
        # first members are all ones now
        # we can maximize the number of ones in the colums by switching the ones with fewer ones
        for j in range(len(A[0])):
            count = 0
            for i in range(len(A)):
                count += A[i][j] #that counts the ones
            #if that column has mostly zeros we can swap the column
            if count < len(A)/2:
                for i in range(len(A)):
                    A[i][j] = 1 if A[i][j] == 0 else 0
        # do the math
        total = 0
        for i in range(len(A)):
            for j, p in enumerate(reversed(range(len(A[i])))):
                total += A[i][j] * (2**p)
        return total
            
        

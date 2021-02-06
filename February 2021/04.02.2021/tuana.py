class Solution:
    
    def addBinary(self, a: str, b: str) -> str:

        #if they differ in size
        if not len(a) == len(b):
            #decide min and max numbers
            minimum = b if(len(a) > len(b)) else a
            maximum = a if(len(a) > len(b)) else b

            eq = "0" * (len(maximum) - len(minimum))
            eq += minimum
            
            # in every case their lengths will be the same
            a = maximum
            b = eq
        # n bit carry adder

        carry = 0
        result = list("0" * max(len(a), len(b)))
        for i in reversed(range(len(b))):
            addition = (int(a[i]) ^ int(b[i]) ^ carry)
            print(addition)
            result[i] = str(addition)
            carry = (int(a[i]) + int(b[i]) + carry)//2
        if carry:
            result.insert(0, "1")
        return "".join(result)
            
        

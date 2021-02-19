class Solution:
    def reflect(self, p, q, corner, bottom, right):
        #fold horizontally
        if right < bottom:
            if corner == 1:
                corner = 2
            elif corner == 2:
                corner = 1
            elif corner == 0:
                corner = -1 # left bottom
            else: #means corner is -1
                corner = 0
            return self.reflect(p, q, corner, bottom, right + q)
        #fold vertically
        elif right > bottom:
            if corner == 1:
                corner = 0
            elif corner == 0:
                corner = 1
            elif corner == 2:
                corner = -1 # left bottom
            else: #means corner is -1
                corner = 2
            return self.reflect(p, q, corner, bottom + p, right)
        
        return corner
        
    
    def mirrorReflection(self, p: int, q: int) -> int:
        return self.reflect(p, q, 1, p, q)

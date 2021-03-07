class MyHashMap:
    
    def __init__(self):
        """
        Initialize your data structure here.
        EMPTY = 0
        DELETED = 1
        FULL = 2  
        """
        self.hash_table = [[-1, -1, 0]] * 10000
        self.size = 10000
        
    def contains_key (self, key: int) -> bool:       
        EMPTY = 0
        DELETED = 1
        FULL = 2 
        
        hash_val = key % 997
        q = 1
        while hash_val < self.size:
            if self.hash_table[hash_val][2] is FULL and self.hash_table[hash_val][0] == key:
                return True
            hash_val += q ** 2
            q += 1
        
        return False
    
    def rehash (self) -> None:        
        hash_table_old = self.hash_table
        self.hash_table = [[-1, -1, 0]] * ( 2 * self.size )
        self.hash_table[:self.size] = hash_table_old
        
        self.size *= 2
        
    def put(self, key: int, value: int) -> None:
        """
        value will always be non-negative.
        """       
        EMPTY = 0
        DELETED = 1
        FULL = 2
        
        
        hash_val = key % 997
        q = 1
        
        if self.contains_key(key):
            while True:
                if self.hash_table[hash_val][0] == key:
                    break
                hash_val += q ** 2
                q += 1
        else:
            while True:
                if self.hash_table[hash_val][2] == EMPTY:
                    break
                hash_val += q ** 2
                q += 1
                if hash_val >= self.size:
                    self.rehash()        
                    
        self.hash_table[hash_val] = [key, value, FULL]
        

    def get(self, key: int) -> int:
        """
        Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key
        """
        EMPTY = 0
        DELETED = 1
        FULL = 2
        
        if self.contains_key(key):
            hash_val = key % 997
            q = 1
            while True:
                if self.hash_table[hash_val][0] == key and self.hash_table[hash_val][2] != DELETED:
                    break
                hash_val += q ** 2
                q += 1
            return self.hash_table[hash_val][1]
        else:
            return -1

    
    def remove(self, key: int) -> None:
        """
        Removes the mapping of the specified value key if this map contains a mapping for the key
        """
        EMPTY = 0
        DELETED = 1
        FULL = 2
        
        if self.contains_key(key):            
            hash_val = key % 997
            q = 1
            while True:         
                if self.hash_table[hash_val][0] == key and self.hash_table[hash_val][2] != DELETED:
                    break
                hash_val += q ** 2
                q += 1
            
            self.hash_table[hash_val][2] = DELETED
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
class MyHashMap {
    Integer[][] keys;
    /** Initialize your data structure here. */
    public MyHashMap() {
        keys = new Integer[(int)1e3 + 1][(int)1e3];
    }
    
    /** value will always be non-negative. */
    public void put(int key, int value) {
        keys[key / 100][key % 100] = value; 
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    public int get(int key) {
        if (keys[key / 100][key % 100] == null) {
            return -1;
        }
        return keys[key / 100][key % 100];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    public void remove(int key) {
        keys[key / 100][key % 100] = null;
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */

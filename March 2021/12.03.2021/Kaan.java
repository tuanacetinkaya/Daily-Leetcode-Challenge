class Solution {
    public boolean hasAllCodes(String s, int k) {
        
        if(s.length() < k){
            return false;
        }
        
        
        HashSet<String> hashSet = new HashSet<>();
        String currentStr = s.substring(0,k);
    
        
        for(int i = k;i<s.length();i++){            
            hashSet.add(currentStr);
            if(k == 1){
                currentStr = "";
            }
            else{
                currentStr = currentStr.substring(1,k);   
            }
            currentStr = currentStr +  s.charAt(i);
            
        }
        hashSet.add(currentStr);
        return hashSet.size() == Math.pow(2,k);
    }
}

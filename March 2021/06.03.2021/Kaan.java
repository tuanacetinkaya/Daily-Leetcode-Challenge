class Solution {
    public int minimumLengthEncoding(String[] words) {
        int result = 0;
        HashSet<String> wordSet = new HashSet<>();
        for(int i=0 ; i<words.length;i++){
            boolean found = false;
            for(int j = 0 ; j<words.length;j++){
                if(i == j){
                    continue;
                }
                else if(words[i].equals(words[j])){
                    continue;
                }
                else if(words[j].endsWith(words[i])){
                    found = true;
                    break;
                }
            }
            if(!found && !wordSet.contains(words[i])){
                wordSet.add(words[i]);
                result+=words[i].length() +1;
            }
        }
        return result; 
    }
}

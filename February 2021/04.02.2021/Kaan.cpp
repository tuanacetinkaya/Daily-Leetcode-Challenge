class Solution {
public:
    string converter(char a ,char b ,char c){
        //144 0+0+0
        //145 1+0+0
        //146 1 + 1 + 0
        //147   1 + 1 + 1
        int result = a+b+c;
        if(result == 144){
            return "00";
        }
        else if(result == 145){
            return "01";
        }
        else if(result == 146){
            return "10";
        }
        else if(result == 147){
            return "11";
        }
        return "00";
    }
    string addBinary(string a, string b) {
                
        int aLen = a.length();
        int bLen = b.length();
        int size = max(aLen,bLen);
        string result = "";
        char c ='0';
        for(int i = 0 ; i<size ;i++){
            
            string sum;
            if(i>=aLen){
                sum = converter(b[bLen-1-i],'0',c);
            }  
            else if(i>=bLen){
                sum = converter(a[aLen-1-i],'0',c);
            }
            else{
                sum = converter(a[aLen-1-i],b[bLen-1-i],c);
            }
            c=sum[0];
            result = sum[1]+ result;
        }
        if(c != '0'){
            return c+result;
        }
        return result;
    }
};

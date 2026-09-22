class Solution {
    public String reverseVowels(String s) {
        int n = s.length();
         if( n <= 1){
            return s;
        }
        int st = 0;
        int rt = n-1;
        char str[] = s.toCharArray();
        while(st < rt){
            while(st < rt && str[st] != 'a' && str[st] != 'A' &&
            str[st] != 'e' && str[st] != 'E' 
            && str[st] != 'i' && str[st] != 'I'&&
            str[st] !='o' && str[st] !='O' && str[st]!='u' && str[st] !='U'){
               st++ ;
            }
            while( st < rt && str[rt] != 'a' && str[rt] != 'A' &&
            str[rt] != 'e' && str[rt] != 'E' 
            && str[rt] != 'i' && str[rt] != 'I'&&
            str[rt] !='o' && str[rt] !='O' && str[rt]!='u' && str[rt] !='U'){
                rt-- ;
            }
            char temp = str[st];
            str[st] = str[rt];
            str[rt] = temp;
           
            st++;
            rt--;
        }
         return new String(str);
        
    }
}
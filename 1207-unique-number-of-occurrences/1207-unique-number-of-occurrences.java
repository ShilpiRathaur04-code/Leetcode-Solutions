class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int n = arr.length;
        for(int i=0;i<n;i++){
            int ch = arr[i];
            if(mp.containsKey(ch)){
                mp.put(ch,mp.get(ch)+1);
            }else{
                mp.put(ch,1);
            }
        }
        HashSet<Integer>st = new HashSet<>();
        for(int freq : mp.values()){
           if(!st.add(freq))
           return false;
        }
        return true;
    }
}
    

        
    

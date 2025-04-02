class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> result = new HashMap<>(); 
        for (String s : strs){
            int [] count = new int [26];
            for (char c : s.toCharArray()){
                count[c - 'a']++;
            } 
            String key = Arrays.toString(count);
            //System.out.println(key); 
            result.putIfAbsent(key, new ArrayList<>());
            result.get(key).add(s); 
        }
        return new ArrayList<>(result.values());
    }
}

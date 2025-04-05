class Solution {
    public String encode(List<String> strs) {
        StringBuilder sb = new StringBuilder();
        if (strs.size() == 0) {
            return null;
        }
        System.out.println(strs.size());
        for (String str : strs){
            sb.append(str + "-Is-Me-Mario-");
        }
        //System.out.println(sb.toString());
        return sb.toString();
    }

    public List<String> decode(String str) {
        if (str == null) return new ArrayList<String>();
        if (str.equals("-Is-Me-Mario-")){
            return Arrays.asList("");
        }
        return Arrays.asList(str.split("-Is-Me-Mario-"));
    }
}

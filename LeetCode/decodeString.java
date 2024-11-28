class Solution {
    int i = 0;
    public String decodeString(String s) {
        String temp = "";
        int count = 0;
        StringBuilder sb = new StringBuilder();
        while (i < s.length()){
            char c = s.charAt(i);
            i++;
            if (c == '['){
                temp = decodeString(s);
                int j = 0; 
                while(j < count){
                    sb.append(temp);
                    j++;
                }
                count = 0;
            }else if (c == ']'){
                break;
            }else if (Character.isAlphabetic(c)){
                sb.append(c);
            }else count = count * 10 + c - '0';
            System.out.println(count);
        }
        return sb.toString();
    }
}

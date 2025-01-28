class Solution {
    public String multiply(String num1, String num2) {
        if (num1.equals("0") && num2.equals("0")) return "0";
        int [] arr = new int[num1.length() + num2.length()];
        for (int i = num1.length() - 1; i >= 0; i--){
            for (int j = num2.length() - 1; j >= 0; j--){
                int val = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
                int sum = val + arr[i + j + 1];
                arr[i + j] += sum / 10;
                arr[i + j + 1] = sum % 10;
            }
        }
        StringBuilder sb = new StringBuilder();
        for (int num : arr) {
            if (!(sb.length() == 0 && num == 0)) {
                sb.append(num);
            }
        }
        return sb.length() == 0 ? "0" : sb.toString();
    }
}

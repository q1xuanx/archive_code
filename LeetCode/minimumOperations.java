class Solution {
    public int minimumOperations(int[] nums) {
        Set<Integer> dis = new HashSet<Integer>();
        for (int i : nums){
            dis.add(i);
        }
        if (dis.size() == nums.length){
            return 0;
        }
        List<Integer> list = Arrays.stream(nums).boxed().toList();
        int currentIndex = 3, res = 0;
        if (list.size() <= 3){
            return 1;
        }
        while (currentIndex < nums.length){
            if (currentIndex + 2 <= list.size()){
                List<Integer> tempList = list.subList(currentIndex, list.size());
                System.out.println(tempList);
                Set<Integer> temp1 = new HashSet<Integer>(tempList);
                res++;
                if (tempList.size() <= 3 && temp1.size() != tempList.size()){
                    res++;
                    break;
                }
                if (temp1.size() == tempList.size()){
                    break;
                }
                currentIndex+=3;
            }else {
                List<Integer> tempList = list.subList(currentIndex, list.size());
                System.out.println("2" + tempList);
                Set<Integer> temp1 = new HashSet<Integer>(tempList);
                res++;
                if (temp1.size() == tempList.size()){
                    break;
                }
                currentIndex += list.size();
            }
        }
        return res;
    }
}

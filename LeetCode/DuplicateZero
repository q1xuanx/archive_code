class Solution {
    public void duplicateZeros(int[] arr) {
        List<Integer> res = new ArrayList();
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == 0) {
				res.add(0);
				res.add(0);
			}else {
				res.add(arr[i]);
			}
		}
		for (int i = 0; i < arr.length; i++) {
			arr[i] = res.get(i);
		}
    }
}

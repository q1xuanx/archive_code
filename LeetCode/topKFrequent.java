class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> result = new HashMap<>();
        for(int i : nums){
            result.putIfAbsent(i, 0);
            result.put(i, result.get(i) + 1);
        }
        int[] lst = result
                        .entrySet()
                        .stream()
                        .sorted(Map.Entry.comparingByValue(Comparator.reverseOrder()))
                        .limit(k)
                        .map(Map.Entry::getKey)
                        .collect(Collectors.toList())
                        .stream()
                        .mapToInt(Integer::intValue)
                        .toArray();
        return lst;
    }
}

class Solution {
    public int distributeCandies(int[] candyType) {
		int n = candyType.length;
		Set<Integer> typesOfCandy = new HashSet<>();
		for (int i=0; i < candyType.length; i++){
			typesOfCandy.add(candyType[i]);
		}
        return Integer.min(typesOfCandy.size(), n/2);

    }
}

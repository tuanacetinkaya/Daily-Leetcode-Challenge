class Solution {
    public int[] findErrorNums(int[] nums) {
        int[] solArray = new int[2];
		Set<Integer> setofmyArray = new HashSet<>();
		for (int i = 0; i < nums.length; i++){
			if (!setofmyArray.contains(nums[i])) {
				setofmyArray.add(nums[i]);
			}
			else {
				solArray[0] = nums[i];
			}
		}
		for (int i = 0; i < nums.length; i++){
			if (!setofmyArray.contains(i+1)){
				solArray[1] = i+1;
				break;
			}
		}
		return solArray;
    }
}

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int l = 0, r = arr.size() - 1;
        int n = arr.size();
        
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
                (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
                    return mid;
            } else if (mid > 0 && arr[mid - 1] > arr[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
};

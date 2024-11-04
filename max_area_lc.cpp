class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_ara = -1;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int wid = right - left;
            int hig = min(height[left], height[right]);
            max_ara = max(max_ara, wid * hig);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_ara;
    }
};


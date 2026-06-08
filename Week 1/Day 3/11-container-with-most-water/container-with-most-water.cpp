class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right){
            int width = right - left;
            int cheight = min(height[left], height[right]);
            int carea = width * cheight;
            marea = max(marea, carea);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return marea;
    }
};
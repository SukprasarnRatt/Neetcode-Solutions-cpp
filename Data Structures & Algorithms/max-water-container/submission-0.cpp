class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0;
        int right = heights.size() -1 ;
        int maxArea = 0;
        int width;
        int area;
        while(left < right){

            width = right - left;
            area = width * min(heights[left], heights[right]);
            maxArea = max(maxArea, area);

            if(heights[right] < heights[left]){
                right--;
            }else{
                left++;
            }
        }

        

        return maxArea;
        
    }
};

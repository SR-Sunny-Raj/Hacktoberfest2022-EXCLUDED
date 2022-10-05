// link : https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area;
        int res = 0;
        
        //Brute Force 
//         for (int i=0; i<height.size() ;i++){
            
//             for(int j=i+1; j<height.size() ; j++){
                
//                 if( height[j] >= height[i] && area < height[i]*(j-i)){
//                     area = height[i]*(j-i);     
//                 }
//                 else if(height[j] <= height[i] && area < height[j]*(j-i)){
//                     area = height[j]*(j-i);
//                 }
//             }
//         }
        
        //Optimize Solution
        
        int l=0,r=height.size()-1;
        while(l<r){
            area = min( height[l], height[r]) * ( r - l );
            res = max(res,area);
            
            if(height[l] <= height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        
    return res;
    }
};
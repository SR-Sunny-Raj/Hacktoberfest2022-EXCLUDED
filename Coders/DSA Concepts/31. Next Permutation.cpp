 void nextPermutation(vector<int>& nums) {
       // next_permutation(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(i>0){
            if(nums[i-1]<nums[i]) break;
            i--;
        }
        int j=i;
        while(j<nums.size()){
            if(nums[j]>nums[i-1]) break;
            j++;
        }
        swap(nums[j],nums[i-1]);
        reverse(nums.begin()+i+1, nums.end());
    
    }

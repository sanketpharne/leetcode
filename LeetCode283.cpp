#include<bits/stdc++.h>
using namespace std;

vector <int> moveZeroes(vector<int>& nums){
    int j = 0;

    for(int i = 0;i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
}

int main(){
    vector <int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    return 0;
}

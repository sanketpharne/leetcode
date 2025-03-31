#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    for (int i = nums.size(); i >= 0; --i){
        if(nums[i] == val){
        nums.erase(nums.begin() + i);
        }
    }
    for (int i = 0; i < nums.size(); i++){
        
        cout << nums[i] << endl;
    }
    
    return nums.size();
}


int main(){
    vector<int> nums = {3,2,2,3,3,2};
    int val = 3; 
    cout <<"size of Vector" << removeElement(nums,val) << endl;
    // for (int num : nums){
    //     cout << num << endl;
    // }
    return 0;
}
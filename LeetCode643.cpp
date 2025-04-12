#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) { 
    double sum = 0;
    
    for(int i = 0; i < k; i++){
        sum += nums[i];
    }
    double MaxProfit = sum;

    for(int i = k; i < nums.size(); i++){
        sum = sum + nums[i] - nums[i - k];
        MaxProfit = max(MaxProfit,sum);
    }
    return MaxProfit / k;
}

int main(){
    vector <int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    findMaxAverage(nums,k);
    return 0;
}
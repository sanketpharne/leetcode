#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> sufix(n, 1);
    vector<int> answer(n, 1);

    for(int i = 1; i <= n -1; i++){
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for(int i = n - 2; i >= 0; i--){
        sufix[i] = sufix[i + 1] * nums[i + 1];
        
    }
    for(int i = 0; i <= n -1; i++){
        answer[i] = prefix[i] * sufix[i];
    }
    return answer;
 }

int main(){
    vector <int> nums = {1,2,3,4};
    productExceptSelf(nums);
    return 0;
}
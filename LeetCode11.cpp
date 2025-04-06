#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max_water = 0;
    int left = 0, right = height.size() - 1;

    while(left < right){
            int wid = right - left;
            int hig = min(height[left],height[right]);
            int total = hig * wid;
            max_water = max(max_water, total);
            height[left] < height[right] ? left++ : right--;     
        }
    return max_water;
}

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}
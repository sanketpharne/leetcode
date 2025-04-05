#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int best_price = prices[0];
    int max_profit = 0;

    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > best_price){
            max_profit = max(max_profit, prices[i] - best_price);
        }
        best_price = min(best_price, prices[i]);
    }

    return max_profit;
}

int main(){
    vector <int> prices = {1,2};
    
    cout << maxProfit(prices);
    return 0;
}
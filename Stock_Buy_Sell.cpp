#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.empty()) return 0;

    int maxprofit = 0;
    int bestbuy = prices[0];

    for(int i = 1; i < prices.size(); i++){
        bestbuy = min(bestbuy, prices[i]);
        maxprofit = max(maxprofit, prices[i] - bestbuy);
    }

    return maxprofit;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter prices: ";
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    int result = maxProfit(prices);

    cout << "Max Profit is: " << result << endl;

    return 0;
}
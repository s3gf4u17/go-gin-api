int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int temp = 0;
    int pointerMin = 0;
    
    for (int pointerMax = 1;pointerMax<pricesSize;pointerMax++){
        temp = prices[pointerMax]-prices[pointerMin];
        if(temp<0) pointerMin = pointerMax;
        else if(temp>profit) profit = temp;
    }
    return profit;
}
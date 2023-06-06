public class m8_stockSellBuy {
    public static int maxProfit(int prices[]){
        int maxProfit = 0;
        int profit = 0;
        int buyStocks = Integer.MAX_VALUE;
        int sellStocks = 0;

        for(int i = 0; i < prices.length; i++){
            sellStocks = prices[i];
            if(buyStocks < sellStocks){
                profit = sellStocks - buyStocks;
                maxProfit = Math.max(profit, maxProfit);
            }
            else{
                buyStocks = sellStocks;
            }
        }
        return maxProfit;
    }
    public static void main(String[] args) {
        int prices[] = {7,1,5,3,6,4};
        int maxProfit = maxProfit(prices);
        System.out.println("Maximum Profit : "+ maxProfit);
    }
}

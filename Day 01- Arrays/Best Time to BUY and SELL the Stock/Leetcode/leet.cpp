/**
 *  Solution: with Time Compleity: O(n)  &  Space Complexity: O(1)
 */
class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;    // lsf = least so far
        int op = 0;                    // op = overall profit
        int pist = 0;                 // pist = profit if sold today
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){      // if we found new buy value which is more smaller then previous one
                lsf = prices[i];      // update our least so far
            }
            pist = prices[i] - lsf;  // calculating profit if sold today by, Buy - sel
            if(op < pist){           // if pist is more then our previous overall profit
                op = pist;         // update overall profit
            }
        }
        return op;     // return overall profit
    }
};
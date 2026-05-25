class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       
        priority_queue<int>pq;
        for(int val : stones) {
            pq.push(val);
        }
        

        while(pq.size()>1) {
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();
             if(val1!=val2) {
                pq.push(val1-val2);
            }
        }
        if(pq.empty()){
            return 0;
        }

        return pq.top();
    }
};
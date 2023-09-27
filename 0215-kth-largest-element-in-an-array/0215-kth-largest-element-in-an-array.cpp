class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
// priority queue store the elements in  either ascending(by default) or descending order
        
        priority_queue<int,vector<int>, greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};
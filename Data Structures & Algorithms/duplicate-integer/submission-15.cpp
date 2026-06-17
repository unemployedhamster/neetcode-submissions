class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool repeated = false;
        // Syntax: std::unordered_map<Key_Type, Value_Type> map_name;
       std::unordered_map<int,int> numsmap; 
       //TODO make a hash map and add all items of array into it
       //using a for each loop because i want the key to the array value 
       //this way I can count the frequency 
       for(int items: nums){
            numsmap[items]++;
       }

       for(const auto num : numsmap){
        if(num.second > 1){
           repeated = true;
           break;
        }
    }
    return repeated; }
};

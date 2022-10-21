class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        stringstream result;
	
        for (int i=1;i<=n;i++) {
            nums.emplace_back(i);
        }
        int i=1;
      
        do {
            i++;            
        } while(next_permutation(nums.begin(),nums.end()) && i!=k);
        
		copy(nums.begin(),nums.end(),ostream_iterator<int>(result,""));
        return result.str();
    }
};

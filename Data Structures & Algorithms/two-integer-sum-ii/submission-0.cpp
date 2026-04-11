class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0, j=n-1;
        int currSum=numbers[i]+numbers[j];
        while(i<=j)
        {
            if(currSum==target)
            {
                return{i+1,j+1};
            }
            else if(currSum>target)
            {
                currSum-=numbers[j];
                j--;
                currSum+=numbers[j];
            }
            else
            {
                currSum-=numbers[i];
                i++;
                currSum+=numbers[i];
            }
        }
        return {};
    }
};

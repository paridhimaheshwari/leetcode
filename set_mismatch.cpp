#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> answer;
    
        int size = nums.size();

        vector<int> arr(size+1, 0);

        for(int i :nums){
            arr[i]++;
            if(arr[i]>1){
                answer.push_back(i);
            }
        }
        for(int j=1; j<size+1; j++){
            if(arr[j]==0){
                answer.push_back(j);
            }
        }

        return answer;
    }
};

void print(vector<int> arr) {
    for(int s :arr) {
        cout << s << ", ";
    }
    cout << endl;
}

int main(){
    Solution s1;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);

    vector<int> soln;
    soln = s1.findErrorNums(nums);
    print(soln);

    return 0;
}

 // for(int i = 1; i < nums.size()+1; i++){
        //     if( nums[i-1]!= i){
        //         answer.push_back(nums[i-1]);
        //         answer.push_back(i);
        //         return answer;
        //     }
        // } 
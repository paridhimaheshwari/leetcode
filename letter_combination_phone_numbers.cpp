#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length() > 4){
            cout <<  "greater than 4. " <<endl;
            return;
        }
        for(int i=0 ; i<digits.length(); i++){
            if(digits[i] > '9' || digits[i] < '2'){
                return;
            }
        }

        for(int j = 0; j<digits.length(); j++){
            digit[i];
        }

        //creating a map of digits to character
        
        //
    }

    
};

void print(vector<string> v){


}

int main(){
    Solution s1;
    cout << "Enter digits: " <<endl;
    string digits;
    vector<string> v1;
    v1 = s1.letterCombinations(digits);
    print(v1);
    return 0;
}
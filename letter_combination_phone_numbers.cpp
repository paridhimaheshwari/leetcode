#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length() > 4){
            cout <<  "greater than 4. " <<endl;
            return vector<string> () ;
        }
        for(int i=0 ; i<digits.length(); i++){
            if(digits[i] > '9' || digits[i] < '2'){
                return vector<string> ();
            }
        }

        for(int j = 0; j<digits.length(); j++){
            cout << digits[j];
        }

        //creating a map of digits to character
        
        //


        return vector<string> ();
    }

    
};

void print(vector<string> v){


}

int main(){
    Solution s1;
    cout << "Enter digits: " <<endl;
    string digits;
    cin >> digits;
    vector<string> v1;
    v1 = s1.letterCombinations(digits);
    print(v1);
    return 0;
}
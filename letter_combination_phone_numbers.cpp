#include<iostream>
#include<vector>
#include<string>


using namespace std;


class Solution {

    private: 
        
    public:
        vector<string> letterCombinations(string digits) {
            int x =digits.length() ;
            if(x > 4){
                cout <<  "greater than 4. " <<endl;
                return vector<string> () ;
            }
            for(int i=0 ; i<x; i++){
                if(digits[i] > '9' || digits[i] < '2'){
                    return vector<string> ();
                }
            }
            
            const string map[] = {"0", "1", "abc", "def", "ghi" , "jkl" , 
            "mno", "pqrs", "tuv", "wxyz"};
            vector<string> arr1;
            char first=digits[0];
            string curr_charmap = map[first - '0'];
            vector<string> ret_arr;
            if(x > 1){
                arr1 = letterCombinations(digits.substr(1,x-1));
                for(int i = 0; i<curr_charmap.length(); i++){
                    for(int j = 0; j<arr1.size(); j++){
                        string new_one = arr1.at(j) + curr_charmap[i];
                        ret_arr.push_back(new_one);
                    }
                }
                return ret_arr;
            }else{ //base case
                cout << "I am in base case: " << digits << endl;
                for(int i = 0; i < curr_charmap.length();i++) {
                    cout << "current char: " << curr_charmap[i] <<endl;
                    string new_one ="";
                    new_one += curr_charmap[i];
                    cout << "String: " << new_one << endl;
                    ret_arr.push_back(new_one);
                }
                return ret_arr;
            }
            return vector<string> ();
        }    
};

void print(vector<string> arr) {
    for(string s:arr) {
        cout << s << ", ";
    }
    cout << endl;
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

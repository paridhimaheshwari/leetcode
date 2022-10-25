#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word_one;
        for(string i: word1){
            word_one+=i;
        }
        cout << word_one <<endl;
        
        string word_two;
        for(string j: word2){
            word_two+=j;
        }
        cout << word_two <<endl;
        
        
        int res = strcmp(word_one.c_str(), word_two.c_str());
        
        if(res == 0){
            return true;
        }else{
            return false;
        }
        
    }
};
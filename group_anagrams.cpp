/* group anagrams problem solved using STL(maps, vectors, arrays, strings */


#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<array>
using namespace std;

class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
            map<array<int,26>,vector<string>> grouping;     //creating a dict type, which will store the words/anagrams.
            
            for(string word : strs){
                array<int,26> key = {0};        //creates an array of integers, length is 26, initialising each alphabet freq to 0
                for(char c: word){
                    ++key[c - 'a'];     //increasing the freq of the alphabets present in that word
                }
                grouping[key].push_back(word);
            }
            
            vector<vector<string>> sol;
            for(auto [key,set] : grouping){
                sol.push_back(set);
            }
            return sol;
    }
    
};

int main(){
    Solution s1;
    vector<string> strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    strs.push_back("bat");

    vector<vector<string> > anagram;
    anagram = s1.groupAnagrams(strs);
    for(vector<string> i: anagram){
        cout << "new group " <<endl;
        for(string j : i){
            cout << j <<endl;
        }
    }
    return 0;
}

//in this code, space complexity can be improved, as for every new word, we have to make a new hash map.

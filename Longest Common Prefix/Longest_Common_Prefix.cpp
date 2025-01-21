#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        if (strs.empty()) return common;

        string word_1 = strs[0];
        for (int z = 0; z < word_1.size(); z++) {
            char character = word_1[z];
            for (int i = 1; i < strs.size(); i++) {
                const string& word = strs[i];
                
                if (z >= word.size() || word[z] != character) {
                    return common;
                }
            }
            common += character;
        }
        return common;
    }
};

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    Solution solution;
    string result = solution.longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}
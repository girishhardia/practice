class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

    string prefix = strs[0];
    
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        
        prefix = prefix.substr(0, j);

        if (prefix.empty()) return "";
    }
    
    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};
    
    cout << "Longest Common Prefix of strs1: " << longestCommonPrefix(strs1) << endl;  // Output: "fl"
    cout << "Longest Common Prefix of strs2: " << longestCommonPrefix(strs2) << endl;  // Output: ""
    
    return 0;
    }
};
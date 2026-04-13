#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> sString, tString;

        for(int i=0; i<s.length(); i++){
            char n = s[i];
            char k = t[i];

            sString[n]++;
            tString[k]++;
        }

        for(int i=0; i<s.length(); i++){
            char n = s[i];
            if(sString[n] != tString[n]) return false;
        }

        return true;
    }
};

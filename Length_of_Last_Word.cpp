#include <string>
#include <sstream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int sayac=0;
        string bos=" ";
        int i = (s.size()-1);
        
            while(s[i] == bos[0])
            i--;
            while(i >= 0 && s[i] != bos[0]){
                sayac++;
                i--;
            }
            return sayac;
    }
};

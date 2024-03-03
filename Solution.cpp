
#include <vector>
#include <string>
using namespace std;

class Solution {

public:
    int countPrefixSuffixPairs(const vector<string>& words) const{
        int numberOfPrefixSuffixPairs = 0;

        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {

                if (words[j].starts_with(words[i]) && words[j].ends_with(words[i])) {
                    ++numberOfPrefixSuffixPairs;
                }
            }
        }
        return numberOfPrefixSuffixPairs;
    }
};

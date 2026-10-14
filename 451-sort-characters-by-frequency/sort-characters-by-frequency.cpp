class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> frequency;
        for (char character : s) {
            frequency[character]++;
        }
        sort(s.begin(), s.end(), [&](char first, char second) {
            if (frequency[first] != frequency[second]) {
                return frequency[first] > frequency[second];
            }
            return first < second;
        });
        return s;
    }
};

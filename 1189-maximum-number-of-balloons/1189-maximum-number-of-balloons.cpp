class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        for (uint32_t t : text){
            map[t]++;
        }
        return min({map['b'], map['a'], map['l']>>1, map['o']>>1, map['n']});
    }
};
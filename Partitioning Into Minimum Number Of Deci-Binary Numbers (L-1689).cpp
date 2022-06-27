class Solution {
public:
    int minPartitions(string n) {
        int result=0;
        for (char c: n) {
            result = max(c - '0', result);
        }
        return result;
    }
};

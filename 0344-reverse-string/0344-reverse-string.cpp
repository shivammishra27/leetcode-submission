class Solution {
public:
    void reverseString(vector<char>& s) {

        int i = 0;
        int ss = s.size();
        int j = ss - 1;

        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {

        // logic build myself 
        // but seen solution and noticed an error when assigning
        // i< n-m+1 and j=0 and 
        // in condition of hatch[i+j]
        int n = haystack.size();
        int m = needle.size();
        
        for (int i = 0; i < n-m+1; i++) {
            int j = 0;
            while (j < m) {
                if (haystack[i+j] == needle[j]) {
                    cout << needle[j] << " ";
                    j++;
                    
                }

                else {
                    break;
                }
                
            }
            if (j==m) return i;
        }
        return -1;

    }
};
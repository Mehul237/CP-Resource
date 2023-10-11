
class Solution {
public:
    int minProcessingTime(vector<int>& p, vector<int>& t) {
      
        sort(p.begin(),p.end());
        sort(t.rbegin(),t.rend());
        int n = p.size();
        int ans = 0;
      
        for(int i=0; i<n; i++) {
            ans = max(ans,p[i] + t[4*i]);
        }
        return ans;
    }
};



// ------------------------------------------------------

class Solution {
public:
    int minProcessingTime(vector<int>& A, vector<int>& B) {
      
        int n = A.size(), ans = 0;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
      
        for(int i = 0, j = n * 4 - 1; i < n; ++i, j -= 4)
            ans = max(ans, A[i] + B[j]);
        return ans;
    }
};



// ------------------------------------------------------

class Solution {
public:
    int minProcessingTime(vector<int>& a, vector<int>& b) {
      
      sort(begin(a), end(a));
      sort(rbegin(b), rend(b));
      int ans = 0;
      
      for (int i = 0; i < size(b); i++)
        ans = max(ans, b[i] + a[i / 4]);
      return ans;
    }
};


// ------------------------------------------------------

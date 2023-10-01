class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        int i = 0;
        stack<pair<char, int> > st;
        st.push({'1', 0});
        while (i < n) {
            char ch = st.top().first;
            int cnt = st.top().second;
            if (ch == s[i]) {
                st.pop();
                st.push({ch, cnt + 1});
            }
            else st.push({s[i], 1});
            while (!st.empty() && st.top().second == k) st.pop();
            i++;
        }
        string res = "";
        while (st.size() != 1) {
            int n = st.top().second;
            char ch = st.top().first;
            for (int i = 0; i < n; ++i) res.push_back(ch);
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
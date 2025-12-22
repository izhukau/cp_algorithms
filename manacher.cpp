pair < vector<int>, vector<int> > manacher(const string& s) {
    int n = (int)s.size();
    string s1 = "#";
    for (int i = 0; i < n; ++ i) {
        s1 += s[i];
        s1 += '#';
    }
 
    vector < int > d((int)s1.size(), 0);
 
    int left = 0, right = 0;
    for (int i = 0; i < (int)s1.size(); ++ i) {
        if (i < right) {
            d[i] = min (right - i, d[right + left - i]);
        }
 
        while (i + d[i] < (int)s1.size() && i - d[i] >= 0 && s1[i - d[i]] == s1[i + d[i]]) {
            ++ d[i];
        }
 
        if (i + d[i] - 1 > right) {
            right = i + d[i] - 1;
            left = i - d[i] + 1;
        }
    }
 
    vector < int > even;
    vector < int > odd;
    for (int i = 1; i < (int)s1.size() - 1; ++ i) {
        if (s1[i] == '#') {
            even.push_back(d[i] / 2);
        } else {
            odd.push_back(d[i] / 2);
        }
    }
    return {odd, even};
}
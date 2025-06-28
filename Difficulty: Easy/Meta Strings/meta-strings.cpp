
bool metaStrings(string A, string B) {
    // your code here
      if (A.length() != B.length()) return false;
        if (A == B && set<char>(A.begin(), A.end()).size() < A.size()) return false;
        vector<int> dif;
        for (int i = 0; i < A.length(); ++i) if (A[i] != B[i]) dif.push_back(i);
        return dif.size() == 2 && (A[dif[0]] == B[dif[1]] && A[dif[1]] == B[dif[0]]);
}
#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline bool calc(const vector<vector<int>> &a, int r1, int c1, int r2, int c2) {
  set<int> st;
  for (int r=r1; r<=r2; r++) for (int c=c1; c<=c2; c++) {
    if (st.find(a[r][c]) != st.end()) return false;
    st.insert(a[r][c]);
  }
  for (int i=1; i<=(r2-r1+1)*(c2-c1+1); i++) {
    if (st.find(i) == st.end()) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  int ans = 0;
  for (int r1=0; r1<n; r1++) for (int c1=0; c1<n; c1++) {
    for (int r2=r1; r2<n; r2++) for (int c2=c1; c2<n; c2++) {
      if (calc(a, r1, c1, r2, c2)) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
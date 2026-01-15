#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(2*n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<2*n; i++) cin >> b[i];

  set<int> st;
  for (int i=0; i<n; i++) {
    if (a[i] != b[i]) return false;
    st.insert(a[i]);
  }
  for (int i=n; i<2*n; i++) {
    if (st.find(b[i]) == st.end()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}
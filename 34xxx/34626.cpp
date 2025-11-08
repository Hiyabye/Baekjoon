#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> st;
  while (n--) {
    int a; cin >> a;
    st.insert(a);
  }
  cout << 2 * st.size() - 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  set<int> st;
  while (n--) {
    int d; cin >> d;
    st.insert(d);
  }
  cout << min<int>(st.size(), k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
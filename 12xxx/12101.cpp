#include <iostream>
#include <set>
#include <string>
using namespace std;

set<string> st;

void backtrack(string cur, int n) {
  if (n == 0) {
    st.insert(cur);
    return;
  }
  if (n >= 1) backtrack(cur + "+1", n-1);
  if (n >= 2) backtrack(cur + "+2", n-2);
  if (n >= 3) backtrack(cur + "+3", n-3);
}

void solve(void) {
  int n, k; cin >> n >> k;

  if (n >= 1) backtrack("1", n-1);
  if (n >= 2) backtrack("2", n-2);
  if (n >= 3) backtrack("3", n-3);

  while (--k && !st.empty()) st.erase(st.begin());
  cout << (st.empty() ? "-1" : *st.begin());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
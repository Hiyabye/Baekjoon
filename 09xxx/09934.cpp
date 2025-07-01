#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  vector<int> v(1<<k, 0);
  for (int i=1; i<(1<<k); i++) cin >> v[i];

  set<int> st;
  for (int i=k-1; i>=0; i--) {
    for (int j=(1<<i); j<(1<<k); j+=(1<<i)) {
      if (st.find(j) != st.end()) continue;
      st.insert(j);
      cout << v[j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
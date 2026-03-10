#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_set<string> st;
  while (n--) {
    int m; cin >> m;
    vector<string> v(m);
    for (int i=0; i<m; i++) cin >> v[i];
    for (int i=0; i<m; i++) {
      if (st.find(v[i]) == st.end()) {
        cout << v[i] << " ";
        st.insert(v[i]);
        break;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
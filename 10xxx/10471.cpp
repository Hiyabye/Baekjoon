#include <cmath>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int w, p; cin >> w >> p;
  vector<int> v(p+2); v[0] = 0; v[p+1] = w;
  for (int i=1; i<=p; i++) cin >> v[i];

  set<int> ans;
  for (int i=0; i<p+1; i++) {
    for (int j=i+1; j<p+2; j++) {
      ans.insert(abs(v[j] - v[i]));
    }
  }

  for (int i : ans) {
    cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
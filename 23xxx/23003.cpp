#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> ans(n, 1);
  for (int i=1; i<n; i++) {
    ans[i] += (s[i-1] < s[i]) ? ans[i-1] : 0;
  }

  cout << "Case #" << idx << ": ";
  for (int i=0; i<n; i++) cout << ans[i] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
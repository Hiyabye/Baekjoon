#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  vector<int> ans;
  for (int i=0; i<max(a.length(), b.length()); i++) {
    int x = (i < a.length()) ? a[i] - '0' : 0;
    int y = (i < b.length()) ? b[i] - '0' : 0;
    ans.push_back(x + y);
  }

  reverse(ans.begin(), ans.end());
  for (int i=0; i<ans.size(); i++) cout << ans[i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
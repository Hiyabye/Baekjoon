#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int s; cin >> s;
  vector<int> b, r;
  while (s--) {
    string t; cin >> t;
    if (t.back() == 'B') {
      t.pop_back();
      b.push_back(stoi(t));
    } else {
      t.pop_back();
      r.push_back(stoi(t));
    }
  }
  sort(b.begin(), b.end(), greater<int>());
  sort(r.begin(), r.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<b.size() && i<r.size(); i++) ans += b[i] + r[i] - 2;
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}
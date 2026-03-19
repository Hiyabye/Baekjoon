#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<string> v;
  for (int i=1; i<=21; i++) for (char c='A'; c<='F'; c++) {
    if ((i == 1 && c < 'D') || (i == 21 && c < 'D') || (i == 21 && c > 'E')) continue;
    v.push_back(to_string(i) + c);
  }

  int idx = -1, cnt = 0;
  while (++idx < v.size()) {
    if (v[idx] == s) continue;
    if (cnt < n) cnt++;
    else { cout << v[idx]; return; }
  }
  cout << "full";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
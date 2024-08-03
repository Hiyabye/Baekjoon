#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v; string s;
  while (getline(cin, s)) v.push_back(s.length());
  int mx = *max_element(v.begin(), v.end());
  v.pop_back();

  int ans = 0;
  for (int i=0; i<v.size(); i++) ans += (mx - v[i]) * (mx - v[i]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
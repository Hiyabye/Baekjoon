#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;
  int k; cin >> k;
  string s; cin >> s;

  int a = 0, b = 0;
  vector<int> ans;
  if (abs(x-a) <= 1 && abs(y-b) <= 1) ans.push_back(0);

  for (int i=0; i<k; i++) {
    a += (s[i] == 'I') - (s[i] == 'Z');
    b += (s[i] == 'S') - (s[i] == 'J');
    if (abs(x-a) <= 1 && abs(y-b) <= 1) ans.push_back(i+1);
  }

  if (ans.empty()) ans.push_back(-1);
  for (int x : ans) cout << x << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <map>
#include <string>
using namespace std;

bool ok(map<char, int> &cnt) {
  for (int i=0; i<12; i++) {
    if (cnt["BRONZESILVER"[i]] == 0) return false;
    cnt["BRONZESILVER"[i]]--;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  map<char, int> cnt;
  for (char c : s) cnt[c]++;

  int ans = 0;
  while (ok(cnt)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
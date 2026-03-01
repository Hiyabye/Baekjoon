#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<char, int> mp;
  while (n--) {
    char s; int l; cin >> s >> l;
    mp[s] += l;
  }

  int ans = 0;
  ans += (mp['S'] + 5) / 6;
  ans += (mp['M'] + 7) / 8;
  ans += (mp['L'] + 11) / 12;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
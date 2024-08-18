#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline long long calc(int a, int g, int t, int c) {
  return (1LL << 48) * a + (1LL << 32) * g + (1LL << 16) * t + c;
}

void solve(void) {
  int k; string w; cin >> k >> w;

  int a = 0, g = 0, t = 0, c = 0;
  for (int i=0; i<k && i<w.length(); i++) {
    if (w[i] == 'A') a++;
    else if (w[i] == 'G') g++;
    else if (w[i] == 'T') t++;
    else if (w[i] == 'C') c++;
  }

  unordered_map<long long, int> mp;
  mp[calc(a, g, t, c)]++;

  for (int i=k; i<w.length(); i++) {
    if (w[i-k] == 'A') a--;
    else if (w[i-k] == 'G') g--;
    else if (w[i-k] == 'T') t--;
    else if (w[i-k] == 'C') c--;
    if (w[i] == 'A') a++;
    else if (w[i] == 'G') g++;
    else if (w[i] == 'T') t++;
    else if (w[i] == 'C') c++;
    mp[calc(a, g, t, c)]++;
  }

  int ans = 0;
  for (auto [_, v] : mp) {
    ans = max(ans, v);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
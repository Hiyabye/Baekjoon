#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  vector<int> cnt(26, 0);
  for (int i=0; i<b.length(); i++) {
    cnt[b[i] - 'a']++;
    cnt[a[i] - 'a']--;
  }
  if (*max_element(cnt.begin(), cnt.end()) <= 0) return true;

  for (int i=b.length(); i<a.length(); i++) {
    cnt[a[i] - 'a']--;
    cnt[a[i-b.length()] - 'a']++;
    if (*max_element(cnt.begin(), cnt.end()) <= 0) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}
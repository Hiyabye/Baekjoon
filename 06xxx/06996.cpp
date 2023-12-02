#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;
  vector<int> cnt(26, 0);
  for (char c : a) cnt[c-'a']++;
  for (char c : b) cnt[c-'a']--;

  for (int n : cnt) {
    if (n != 0) {
      cout << a << " & " << b << " are NOT anagrams.\n";
      return;
    }
  }
  cout << a << " & " << b << " are anagrams.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
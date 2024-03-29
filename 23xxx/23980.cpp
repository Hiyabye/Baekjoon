#include <iostream>
#include <string>
using namespace std;

bool anagram(const string &x, const string &y) {
  int cnt[26] = {0};
  for (char c : x) cnt[c-'A']++;
  for (char c : y) cnt[c-'A']--;
  for (int i=0; i<26; i++) if (cnt[i] > 0) return false;
  return true;
}

void solve(int idx) {
  int l; cin >> l;
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=1; i<=l; i++) {
    for (int j=0; j<=l-i; j++) {
      bool flag = false;
      for (int k=0; k<=l-i; k++) {
        if (anagram(a.substr(j, i), b.substr(k, i))) {
          flag = true;
          break;
        }
      }
      if (flag) ans++;
    }
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
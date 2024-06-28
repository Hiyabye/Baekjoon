#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(int idx) {
  string s1; cin >> s1;
  string s2; cin >> s2;
  if (s1 == "END" && s2 == "END") return false;

  vector<int> cnt(26, 0);
  for (char c : s1) cnt[c - 'a']++;
  for (char c : s2) cnt[c - 'a']--;

  bool ans = true;
  for (int i=0; i<26; i++) {
    if (cnt[i]) {
      ans = false;
      break;
    }
  }
  cout << "Case " << idx << ": " << (ans ? "same" : "different") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
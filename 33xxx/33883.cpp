#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

inline int one(const string &s) {
  for (int i=s.length()-1; i>=0; i--) {
    if (vowel(s[i])) return i+1;
  }
  return -1;
}

inline int two(const string &s) {
  bool flag = false;
  for (int i=s.length()-1; i>=0; i--) {
    if (!vowel(s[i])) continue;
    if (flag) return i+1;
    else flag = true;
  }
  return -1;
}

void solve(void) {
  string s; cin >> s;

  cout << ((!vowel(s.back()) && s.back() != 'n' && s.back() != 's') ? one(s) : two(s));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
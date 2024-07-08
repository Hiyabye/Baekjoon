#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve(int idx) {
  string s; cin >> s;

  cout << "Case #" << idx << ": " << s << " is ruled by ";
  cout << (s.back() == 'y' ? "nobody" : vowel(s.back()) ? "a queen" : "a king");
  cout << ".\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
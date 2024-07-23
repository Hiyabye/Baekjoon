#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

unordered_set<char> st = {
  'q', 'w', 'e', 'r', 't', 'y',
  'a', 's', 'd', 'f', 'g',
  'z', 'x', 'c', 'v', 'b'
};

inline bool calc(char c) {
  if ('A' <= c && c <= 'Z') c += 'a' - 'A';
  return st.find(c) != st.end();
}

void solve(void) {
  string s; getline(cin, s);

  int l = 0, r = 0, m = 0;
  for (char c : s) {
    if (c == ' ') { m++; continue; }
    if ('A' <= c && c <= 'Z') m++;
    if (calc(c)) l++;
    else r++;
  }

  while (m--) {
    if (l <= r) l++;
    else r++;
  }
  cout << l << " " << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
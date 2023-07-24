#include <bits/stdc++.h>
using namespace std;

bool solve(void) {
  string s;
  getline(cin, s);
  if (s == "END") return false;
  
  reverse(s.begin(), s.end());
  cout << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}
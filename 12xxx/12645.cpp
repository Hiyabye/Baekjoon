#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string s; cin >> s;

  if (!next_permutation(s.begin(), s.end())) {
    int x = 0;
    while (s[0] == '0') swap(s[0], s[x++]);
    s = s.substr(0, 1) + "0" + s.substr(1);
  }
  cout << "Case #" << idx << ": " << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
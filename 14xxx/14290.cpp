#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string s; cin >> s;
  int i, j; cin >> i >> j;

  while (s.length() < j) s += s;
  cout << "Case #" << idx << ": " << count(s.begin()+i-1, s.begin()+j, 'B') << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
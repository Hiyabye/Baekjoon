#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();
  
  sort(s.begin(), s.end());
  s.erase(unique(s.begin(), s.end()), s.end());
  cout << n - s.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
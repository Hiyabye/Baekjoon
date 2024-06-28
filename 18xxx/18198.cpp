#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<s.length(); i+=2) {
    ans += (s[i] == 'A' ? 1 : -1) * (s[i+1] - '0');
  }
  cout << (ans > 0 ? "A" : "B");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
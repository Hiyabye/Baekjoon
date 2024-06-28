#include <iostream>
using namespace std;

void solve(void) {
  string s; cin >> s;
  for (int i=0; i<s.length(); i++) cout << (char)(s[i]-'a'+'A');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
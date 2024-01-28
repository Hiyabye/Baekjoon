#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = 0, b = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') a++;
    if (s[i] == 'y') b++;
  }
  cout << a << " " << a + b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
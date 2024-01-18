#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return c - '0';
}

void solve(void) {
  string a, b; cin >> a >> b;
  int n = a.length();

  for (int i=0; i<n; i++) cout << (c2i(a[i]) & c2i(b[i]));
  cout << "\n";

  for (int i=0; i<n; i++) cout << (c2i(a[i]) | c2i(b[i]));
  cout << "\n";

  for (int i=0; i<n; i++) cout << (c2i(a[i]) ^ c2i(b[i]));
  cout << "\n";

  for (int i=0; i<n; i++) cout << (c2i(a[i]) ^ 1);
  cout << "\n";

  for (int i=0; i<n; i++) cout << (c2i(b[i]) ^ 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
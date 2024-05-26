#include <iostream>
#include <string>
using namespace std;

char calc(char a, char b) {
  if (a == b)        return a;
  else if (a == 'A') return b == 'G' ? 'C' : (b == 'C' ? 'A' : 'G');
  else if (a == 'G') return b == 'A' ? 'C' : (b == 'C' ? 'T' : 'A');
  else if (a == 'C') return b == 'A' ? 'A' : (b == 'G' ? 'T' : 'G');
  else               return b == 'G' ? 'A' : 'G';
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  while (n > 1) {
    s[n-2] = calc(s[n-2], s[n-1]);
    n--;
  }
  cout << s[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
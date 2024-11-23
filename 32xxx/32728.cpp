#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  string a = "", b = "", c = "";
  for (int i=0; i<n; i++) {
    if (s[i] == 's') {
      if (a.length() < k)      a += 's';
      else if (b.length() < k) b += 's';
      else                     c += 's';
    } else if (s[i] == 'r') {
      if (b.length() < k)      b += 'r';
      else if (c.length() < k) c += 'r';
      else                     a += 'r';
    } else {
      if (c.length() < k)      c += 'p';
      else if (a.length() < k) a += 'p';
      else                     b += 'p';
    }
  }
  cout << a << "\n" << b << "\n" << c;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

  solve();
	return 0;
}
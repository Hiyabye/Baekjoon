#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; getline(cin, b);
  int s; cin >> s;
  string t; cin >> t;

  int c = 0, d = 0;
  for (int i=0; i<s; i++) {
    switch (t[i]) {
      case 'H': if (i & 1) d++;    else c++;    break;
      case 'D': if (i & 1) d += 2; else c += 2; break;
      case 'O': if (i & 1) c++;    else d++;    break;
    }
    
    if (c > 6) { cout << a << " " << 7 << " " << b << " " << d << ". " << a << " has won."; return; }
    if (d > 6) { cout << a << " " << c << " " << b << " " << 7 << ". " << b << " has won."; return; }
  }

  if (c > d)      cout << a << " " << c << " " << b << " " << d << ". " << a << " is winning.";
  else if (c < d) cout << a << " " << c << " " << b << " " << d << ". " << b << " is winning.";
  else            cout << a << " " << c << " " << b << " " << d << ". " << "All square.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
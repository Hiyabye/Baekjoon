#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  map<char, int> m;

  for (int i=0; i<51; i++) {
    char a; int b; cin >> a >> b;
    m[a] += b;
  }

  if (m['S'] != 91) cout << "S " << 91 - m['S'];
  if (m['B'] != 91) cout << "B " << 91 - m['B'];
  if (m['V'] != 91) cout << "V " << 91 - m['V'];
  if (m['K'] != 91) cout << "K " << 91 - m['K'];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
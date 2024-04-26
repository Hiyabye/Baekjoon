#include <iostream>
using namespace std;

char calc(char a, char b) {
  if (a == 'R')      return b == 'S' ? 'R' : 'P';
  else if (a == 'P') return b == 'R' ? 'P' : 'S';
  else               return b == 'P' ? 'S' : 'R';
}

void solve(void) {
  int n; cin >> n;
  string a; cin >> a;
  string b; cin >> b;

  for (int i=0; i<n; i++) {
    cout << calc(a[i], b[i]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  int a = 0, b = s.length()-1;
  while (n--) {
    int p, q; cin >> p >> q;
    a += p;
    b = min(b, a+q-1);
  }
  cout << s.substr(a, b-a+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
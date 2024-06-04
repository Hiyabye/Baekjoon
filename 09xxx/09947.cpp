#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a, b; cin >> a >> b;
  if (a == "#" && b == "#") return false;
  int n; cin >> n;

  int cnt = 0;
  for (int i=0; i<n; i++) {
    char c, d; cin >> c >> d;
    cnt += (c == d);
  }
  cout << a << " " << cnt << " " << b << " " <<  n - cnt << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
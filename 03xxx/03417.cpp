#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  if (a == "0") return false;
  string b; cin >> b;

  for (int i=0; i<b.length(); i++) {
    b[i] = (b[i] - 'A' + a[i % a.length()] - 'A' + 1) % 26 + 'A';
  }
  cout << b << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
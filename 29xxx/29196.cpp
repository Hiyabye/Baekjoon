#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  string k;
  cin >> k;

  int a = 0, b = 1;
  for (int i=2; i<k.length(); i++) {
    a *= 10;
    a += k[i] - '0';
    b *= 10;
  }

  int g = gcd(a, b);
  cout << "YES\n" << a/g << " " << b/g << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("output.txt", "w", stdout);

  solve();
  return 0;
}
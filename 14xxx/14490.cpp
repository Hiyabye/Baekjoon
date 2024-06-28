#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  string s; cin >> s;

  int n = stoi(s.substr(0, s.find(':')));
  int m = stoi(s.substr(s.find(':') + 1));
  int g = gcd(n, m);

  cout << n / g << ":" << m / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
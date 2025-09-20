#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int h1 = stoi(a.substr(0, 2));
  int m1 = stoi(a.substr(3, 2));
  int s1 = stoi(a.substr(6, 2));
  int h2 = stoi(b.substr(0, 2));
  int m2 = stoi(b.substr(3, 2));
  int s2 = stoi(b.substr(6, 2));

  cout << (h1 < 12 && h2 >= 12) << " " << h2 - h1 << " " << (h2 - h1) * 60 + m2 - m1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
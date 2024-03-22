#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  int a = count(s.begin(), s.end(), 'S');
  int b = count(t.begin(), t.end(), 'S');

  for (int i=0; i<a*b; i++) cout << "S(";
  cout << "0";
  for (int i=0; i<a*b; i++) cout << ")";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
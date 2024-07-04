#include <iostream>
#include <string>
using namespace std;

void rec(string &s, int a, int b) {
  if (b == 1) return;

  rec(s, a, b/3);
  for (int i=b/3; i<b*2/3; i++) s[a+i] = ' ';
  rec(s, a+b*2/3, b/3);
}

void solve(int n) {
  int sz = 1;
  while (n--) sz *= 3;
  
  string s(sz, '-');
  rec(s, 0, sz);
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}
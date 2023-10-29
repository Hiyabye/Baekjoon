#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  while (a.length() > 1 && a.back() == '0') a.pop_back();
  while (b.length() > 1 && b.back() == '0') b.pop_back();
  
  string c = "";
  int carry = 0;
  for (int i=0; i<max(a.length(), b.length()); i++) {
    int ai = i < a.length() ? a[i] - '0' : 0;
    int bi = i < b.length() ? b[i] - '0' : 0;
    int ci = ai + bi + carry;
    carry = ci / 2;
    c += (ci % 2) + '0';
  }
  if (carry) c += '1';

  reverse(c.begin(), c.end());
  cout << c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
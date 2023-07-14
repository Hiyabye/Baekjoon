#include <bits/stdc++.h>
using namespace std;

string add(const string &a, const string &b) {
  string c;
  int carry = 0;

  for (int i=0; i<min(a.size(), b.size()); i++) {
    int sum = (a[i]-'0') + (b[i]-'0') + carry;
    c.push_back((sum%10) + '0');
    carry = sum / 10;
  }
  for (int i=min(a.size(), b.size()); i<max(a.size(), b.size()); i++) {
    int sum = (a.size() > b.size() ? a[i] : b[i]) - '0' + carry;
    c.push_back((sum%10) + '0');
    carry = sum / 10;
  }
  if (carry) c.push_back(carry + '0');

  reverse(c.begin(), c.end());
  return c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  cout << add(a, b);
  return 0;
}
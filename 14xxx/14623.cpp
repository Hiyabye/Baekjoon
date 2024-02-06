#include <iostream>
#include <string>
using namespace std;

long long bin2dec(string b) {
  long long ret = 0;
  for (char c : b) ret = 2 * ret + (c - '0');
  return ret;
}

string dec2bin(long long d) {
  string ret = "";
  while (d > 0) ret = to_string(d & 1) + ret, d >>= 1;
  return ret;
}

void solve(void) {
  string b1; cin >> b1;
  string b2; cin >> b2;

  cout << dec2bin(bin2dec(b1) * bin2dec(b2));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
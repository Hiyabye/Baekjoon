#include <iostream>
#include <string>
#include <vector>
using namespace std;

string add(string& a, string& b) {
  string ret;
  int carry = 0, aLen = a.length(), bLen = b.length();
  for (int i=0; i<aLen || i<bLen; i++) {
    int x = i < aLen ? a[aLen-1-i]-'0' : 0;
    int y = i < bLen ? b[bLen-1-i]-'0' : 0;
    int z = x + y + carry;
    carry = z / 10;
    ret = to_string(z % 10) + ret;
  }
  if (carry) ret = to_string(carry) + ret;
  return ret;
}

vector<string> precompute(void) {
  vector<string> f(481);
  f[0] = "1", f[1] = "1";
  for (int i=2; i<=480; i++) {
    f[i] = add(f[i-1], f[i-2]);
  }
  return f;
}

bool cmp(string& a, string& b) {
  if (a.length() != b.length()) return a.length() < b.length();
  return a < b;
}

bool solve(vector<string>& f) {
  string a, b; cin >> a >> b;
  if (a == "0" && b == "0") return false;

  int l = 1, r = 480;
  while (cmp(f[l], a)) l++;
  while (cmp(b, f[r])) r--;

  cout << r-l+1 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<string> f = precompute();
  while (solve(f));
  return 0;
}
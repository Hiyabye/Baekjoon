#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s1; cin >> s1;
  string s2; cin >> s2;
  string s3; cin >> s3;

  bool l = false, k = false, p = false;
  if (s1.front() == 'l' || s2.front() == 'l' || s3.front() == 'l') l = true;
  if (s1.front() == 'k' || s2.front() == 'k' || s3.front() == 'k') k = true;
  if (s1.front() == 'p' || s2.front() == 'p' || s3.front() == 'p') p = true;
  return l && k && p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "GLOBAL" : "PONIX");
  return 0;
}
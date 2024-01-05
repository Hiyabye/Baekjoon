#include <iostream>
#include <string>
using namespace std;

bool two(string s) {
  return (s.back() - '0') % 2 == 0;
}

bool three(string s) {
  int sum = 0;
  for (char c : s) sum += c - '0';
  return sum % 3 == 0;
}

bool seven(string s) {
  int sum = 0;
  for (char c : s) sum = (sum * 10 + c - '0') % 7;
  return sum == 0;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "0") return false;

  cout << (two(s) && three(s) && seven(s) ? "PREMIADO" : "TENTE NOVAMENTE") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}
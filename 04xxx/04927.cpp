#include <iostream>
#include <string>
using namespace std;

inline int mod9(const string &s) {
  int sum = 0;
  for (char c : s) sum += c - '0';
  return sum % 9;
}

bool solve(int idx) {
  string s; cin >> s;
  if (s == ".") return false;

  int op = s.find('*') != string::npos ? s.find('*') : s.find('+');
  int eq = s.find('=');
  string a = s.substr(0, op);
  string b = s.substr(op+1, eq-op-1);
  string c = s.substr(eq+1); c.pop_back();

  cout << idx << ". ";
  if (s.find("*") != string::npos) {
    cout << ((mod9(a) * mod9(b)) % 9 == mod9(c) ? "PASS" : "NOT!");
  } else {
    cout << ((mod9(a) + mod9(b)) % 9 == mod9(c) ? "PASS" : "NOT!");
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
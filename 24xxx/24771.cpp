#include <cctype>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

inline string trim(const string &s) {
  stringstream ss(s);
  string res;
  while (ss >> res);
  for (char &c : res) c = tolower(c);
  return res;
}

bool solve(int idx) {
  int n; cin >> n; cin.ignore();
  if (n == 0) return false;

  map<string, int> mp;
  while (n--) {
    string s; getline(cin, s);
    mp[trim(s)]++;
  }

  cout << "List " << idx << ":\n";
  for (auto [k, v] : mp) {
    cout << k << " | " << v << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
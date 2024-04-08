#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  vector<string> v(1); cin >> v[0];
  while (v.back() != "#") {
    string s; cin >> s;
    v.push_back(s);
  }
  v.pop_back();
  if (v.empty()) return false;

  for (int i=1; i<v.size(); i++) {
    if (v[i].length() != v[i-1].length()) {
      cout << "Incorrect\n";
      return true;
    }
  }

  for (int i=1; i<v.size(); i++) {
    bool flag = true;
    for (int j=0; j<v[i].length(); j++) {
      if (v[i][j] != v[i-1][j]) {
        if (flag) flag = false;
        else {
          cout << "Incorrect\n";
          return true;
        }
      }
    }
    if (flag) {
      cout << "Incorrect\n";
      return true;
    }
  }

  cout << "Correct\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  set<string> st;
  while (n--) {
    string s; cin >> s;
    if (s.length() < 6) continue;
    if (s.substr(s.size()-6) == "Cheese") st.insert(s);
  }
  return st.size() >= 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yummy" : "sad");
  return 0;
}
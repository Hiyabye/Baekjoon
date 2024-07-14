#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int calc(int n) {
  string s = to_string(n * n);
  while (s.length() < 8) s = "0" + s;
  return stoi(s.substr(2, 4));
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  unordered_set<int> st;
  st.insert(n);
  n = calc(n);

  while (st.find(n) == st.end()) {
    st.insert(n);
    n = calc(n);
  }
  cout << st.size() << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
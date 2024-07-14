#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  unordered_set<char> st;
  for (char c : s) st.insert(c);
  return st.size() >= 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}
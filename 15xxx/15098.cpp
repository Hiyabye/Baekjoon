#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  set<string> st; string t;
  while (ss >> t) {
    if (st.find(t) != st.end()) return false;
    st.insert(t);
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}
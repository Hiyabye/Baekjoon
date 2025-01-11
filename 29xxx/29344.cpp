#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  stack<string> st; string t;
  while (ss >> t) {
    if (t.back() != '.') {
      st.push(t);
    } else {
      cout << t.substr(0, t.length()-1);
      while (!st.empty()) {
        cout << " " << st.top();
        st.pop();
      }
      cout << ". ";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
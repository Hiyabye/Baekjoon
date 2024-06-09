#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  stack<char> st;
  for (char c : s) {
    if (st.empty() || c == 'A' || st.size() < 3) {
      st.push(c);
    } else {
      char b = st.top(); st.pop();
      char a = st.top(); st.pop();
      if (b == 'A' && a == 'P' && st.top() == 'P') {
        st.pop();
        st.push('P');
      } else {
        st.push(a);
        st.push(b);
        st.push(c);
      }
    }
  }
  return st.size() == 1 && st.top() == 'P';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "PPAP" : "NP");
  return 0;
}
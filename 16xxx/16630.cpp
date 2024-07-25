#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  stack<int> st;
  int cur = 1; st.push(cur++);

  for (int i=0; i<n-1; i++) {
    if (s[i] == 'L') {
      st.push(cur++);
    } else {
      while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
      }
      st.push(cur++);
    }
  }

  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
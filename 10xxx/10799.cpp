#include <iostream>
#include <string>
#include <stack>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 0;
  stack<char> st;
  for (int i=0; i<s.size(); i++) {
    if (s[i] == '(') st.push(s[i]);
    else {
      st.pop();
      if (s[i-1] == '(') ans += st.size();
      else ans++;
    }
  }
  
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
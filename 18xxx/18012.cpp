#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(int idx) {
  string s; cin >> s;

  int ans = 0;
  stack<char> st;
  for (char c : s) {
    if (c == 'o') st.push(c);
    else if (st.empty()) ans++;
    else st.pop();
  }
  ans += st.size();
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}
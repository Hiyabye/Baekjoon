#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  stack<char> st;
  for (char c : s) {
    switch (c) {
      case '(':
        st.push(c);
        break;

      case ')':
        while (!st.empty() && st.top() != '(') {
          cout << st.top();
          st.pop();
        }
        st.pop();
        break;

      case '+':
      case '-':
        while (!st.empty() && st.top() != '(') {
          cout << st.top();
          st.pop();
        }
        st.push(c);
        break;

      case '*':
      case '/':
        while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
          cout << st.top();
          st.pop();
        }
        st.push(c);
        break;
        
      default:
        cout << c;
        break;
    }
  }
  
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
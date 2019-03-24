#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <int> num;
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string math;
    cin >> math;
    if (math[0] == '+') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() + num1;
      num.pop();
      num.push(ans);
    }

    else if (math[0] == '-') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() - num1;
      num.pop();
      num.push(ans);
    }

    else if (math[0] == '*') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() * num1;
      num.pop();
      num.push(ans);
    }

    else if (math[0] == '/') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() / num1;
      num.pop();
      num.push(ans);
    }

    else {
      int a = 0;
      for (int j = 0; math[j] != '\0'; j++) {
        a = a * 10 + math[j] - '0';
      }
      num.push(a);
    }
  }
  cout << num.top();
}

#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <int> num;
  string math;
  cin >> math;

  for (int i = 0; math[i] != '\0'; i++) {
    if (math[i] == '+') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() + num1;
      num.pop();
      num.push(ans);
    }

    else if (math[i] == '-') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() - num1;
      num.pop();
      num.push(ans);
    }

    else if (math[i] == '*') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() * num1;
      num.pop();
      num.push(ans);
    }

    else if (math[i] == '/') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() / num1;
      num.pop();
      num.push(ans);
    }

    else {
      int a = math[i] - '0';
      num.push(a);
    }
  }
  cout << num.top();
}

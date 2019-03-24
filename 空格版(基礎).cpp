#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <int> num;
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    char math;
    cin >> math;
    if (math == '+') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() + num1;
      num.pop();
      num.push(ans);
    }

    else if (math == '-') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() - num1;
      num.pop();
      num.push(ans);
    }

    else if (math == '*') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() * num1;
      num.pop();
      num.push(ans);
    }

    else if (math == '/') {
      int num1 = num.top();
      num.pop();
      int ans = num.top() / num1;
      num.pop();
      num.push(ans);
    }

    else {
      int a = math - '0';
      num.push(a);
    }
  }
  cout << num.top();
}

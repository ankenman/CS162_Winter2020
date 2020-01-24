#include <iostream>

using namespace std;


int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << ", " << secondNum << "\n";

  swap(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << ", " << secondNum << "\n";

  return 0;
}

void swap(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

/*
 * Code adapted from
 * https://www.w3schools.com/cpp/cpp_function_param.asp
 */

#include <iostream>
using namespace std;

int main() {
  cout << "Please enter two numbers: ";
  
  int num1, num2;
  cin >> num1 >> num2;

  cout << num1 + num2 << "\n";
  cout << num1 * num2 << "\n";
  cout << num1 - num2 << "\n";
  cout << static_cast<double>(num1) / num2 << "\n";
}
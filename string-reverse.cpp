#include <iostream>
#include <string>
using namepace std;

int main(){
  string data;
  
  cout << "Enter the string you want to reverse";
  cin >> data;
  
  reverse(data.begin(), data.end());
  
  cout << data;
  
  return 0;
}

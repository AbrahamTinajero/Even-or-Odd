#include <iostream>
#include <string>
using namespace std;

bool even(int Num);

int main(){
  int Num;
  cout << "Enter Number: ";
  cin >> Num;
  cout << even(Num);
  return 0;
  
}
bool even(int Num){
  if (Num % 2 == 0){
    return true;
  }
  else {
    return false;
  }

}


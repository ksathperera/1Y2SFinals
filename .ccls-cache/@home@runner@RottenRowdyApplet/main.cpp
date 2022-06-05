#include <iostream>
using namespace std;


int main() {
  int totp;
  float finalp;
  cout << "Enter the total price :";
  cin >> totp;

  if(totp > 10000){
    finalp = totp - (totp * 25/100.0); 
    cout << "Final price is "<< finalp << ("\n");
  }
  else if (totp > 5000)
  {
    finalp = totp - (totp * 15/100.0);
    cout << "Final price is "<< finalp << ("\n");
  }
  else if (totp >3000)
  {
    finalp = totp - (totp * 10/100.0);
    cout << "Final price is "<< finalp << ("\n");
  }
  else {
    cout<<"Invalid total price" <<endl;
  }
  
  
  cout << "Hello World!\n";

  return 0;
}
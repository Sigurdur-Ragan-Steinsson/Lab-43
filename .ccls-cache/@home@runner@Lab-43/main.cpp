#include <iostream>

using namespace std;

int main(void) {
 int a = 8, b = 0, c = 0;
 cin >> b;
 try 
  {
  //Your code here
  c = a / b;
  if(b == 0){
     throw 0; 
  }
  }
  catch(int x)
   {
     cout << "Your input is not valid, you can't divide by " << x << endl;
     return 0;
   }
 // Your code here
 cout << c << endl;
 return 0;
}
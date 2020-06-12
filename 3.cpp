#include <iostream>
using namespace std;
int main()
{
   int year;

   cout<<"Introduce a"<<(char)164<<"o: ";
   cin >> year;
  
   if(year%4==0 and year%100!=0 or year%400==0)
         cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;

   return 0; 
}
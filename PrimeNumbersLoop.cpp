#include <iostream>
#include <conio.h>

using namespace std;

int main() {
   //std::string s1,s2; // while // {}
   int n;
   bool flag=true; // note: flag default value is false not true

   // do {} while (ch!=27);
       cout<< "\nPlease enter your number = " << endl;
       cin>> n;
       for (int i=2;i<n;i++)
       {
           if (n%i == 0)
           {
               flag = false;
               break;
           }
       }
       if (flag == true)
           cout << "It's prime number \n" ;
       else
        cout << "It's not prime number \n" ;
      // cout << " ..... Please, press enter to continue or esc to out \n" ;

       return 0;
}

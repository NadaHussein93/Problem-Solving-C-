#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

bool IsPrime (int number) {
bool Prime = true;

for (int i=2; i<number;i++){
    if (number % i == 0)
       {
         Prime = false;
        break;
       }
}
return Prime;
}

int main() {
   //std::string s1,s2;
   int n;
   bool flag;

       cout<< "\nPlease enter your number = " << endl;
       cin>> n;
       for (int i=2;i<=n;i++)
       {

           if (IsPrime(i) == true)
           {
               cout << i << endl;
           }
       }
       return 0;
}

#include <iostream>

using namespace std;

int main()
{
   cout << "Enter your age:" ;
   int age;
   cin >> age;

   if (age > 10)
   {
       cout << "Do you go to school?" ;
   }
   else
   {
       cout << "Wow, you're so big already!" ;

   }

   int ans;
   cin >> ans;

   if (ans > 0)
    {
        cout << "you are cool" ;
    }
      else if (ans==0)
   {
       cout << "why!" ;

   }

    return 0;
}

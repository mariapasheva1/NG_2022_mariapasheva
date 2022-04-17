#include <iostream>

using namespace std;

int main()
{
   cout << "Motherboard price:" ;
   int pr1;
   cin >> pr1;

   cout << "Videocard price:" ;
   int pr2;
   cin >> pr2;

   cout << "CPU price:" ;
   int pr3;
   cin >> pr3;

   cout << "Discount:" ;
   int disc;
   cin >> disc;

   cout << "Your PC will cost:" ;
   float cost;

   cost = (pr1 + pr2 + pr3)- disc ;

   cout << cost;


    return 0;
}

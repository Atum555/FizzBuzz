#include <iostream>

int FizzBuzz(int Number) {
   int x = 0;
   if (Number % 3 == 0) {x = 1;}
   if (Number % 5 == 0) {x += 2;}

   if (x == 0) {
      std::cout << Number;
      std::cout << "\n";
   }

   else if (x == 1) {
      std::cout << "Fizz\n";
   }
   
   else if (x == 2) {
      std::cout << "Buzz\n";
   }

   else if (x == 3) {
      std::cout << "FizzBuzz\n";
   }
   return 0;
}

int main() {
   int i = 1;
   std::cout << "Number: ";
   int a;
   std::cin >> a;
   while (i <= a) {
      FizzBuzz(i);
      i ++;
   }

   return 0;
}
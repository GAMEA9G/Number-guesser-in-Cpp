// Your First C++ Program


#include <cstdio>
#include <iostream>
int even_reminder;
int multiple_of_three_reminder;
int nine_or_not;
int seven_or_one;
bool even;
int rem_3;
int two_or_8;
int main() {
  std::cout << "Number Guesser Game \nThe game asks questions about the number if you answer those questions the code will guess the number in your mind \nRule one digit number only (1-9) \nWhat is the reminder when number divided by 2 : ";
  std::cin >> even_reminder;
  if (even_reminder == 1) {
    even = false;
    std::cout << "Possible numbers are(1,3,5,7,9) \nWhat is the reminder when it is divided by 3 :";
    std::cin >> multiple_of_three_reminder;
    if (multiple_of_three_reminder == 0) {
      std::cout << "the posible numbers 3,9 \nwhat is the reminder when the number is divided by 4 :";
      std::cin >> nine_or_not;
      if (nine_or_not == 2) {
        std::cout << "the number is 9";
      } else {
        std::cout << "the number is 3";
      }
    } else if (multiple_of_three_reminder == 1) {
      std::cout << "possible numbers 7,1 \nWhat is the reminder when the number is divided by 4 :";
      std::cin >> seven_or_one;
      if (seven_or_one == 3) {
        std::cout << "The number is 7";

      } else {
        std::cout << "The number is 1";
      }

    } else if (multiple_of_three_reminder == 2) {
      std::cout << "The Number is 5";
    }
  }
  else if (even_reminder ==0)
    {
      
      std::cout << "possible numbers are(2,4,6,8) \nWhat is the reminder when it is divided by 3 :";
      std::cin >> rem_3;
      if (rem_3 == 2) {
        std::cout
            << "the number is 2 or 8 \nWhat is the reminder when divided by 4 :";
        std::cin >> two_or_8;
        if (two_or_8 == 0) {
          std::cout << "The number is 8";
        } else {
          std::cout << "The number is 2";
        }
      } else if (rem_3 == 1) {
        std::cout << "the number is 4";
      }
      else if (rem_3 == 0) {
        std::cout << "The number is 6";
      }
    }
  }

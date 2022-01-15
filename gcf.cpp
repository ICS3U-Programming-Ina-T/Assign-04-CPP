// Copyright (c) Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Date: Jan. 10, 2022
// This program determines the GCF
// of two numbers using a 'for' loop.
#include <iostream>


int choiceTwo() {
  // declaring variables
  int num1Int, num2Int, lcm, greater;
  std::string num1String;
  std::string num2String;

  // get the user number as a string
  std::cout << "Enter the first whole number: ";
  std::cin >> num1String;
  std::cout << "Enter the second whole number: ";
  std::cin >> num2String;
  std::cout << std::endl;

  try {
      // convert the user's number to an int
      num1Int = std::stoi(num1String);
      num2Int = std::stoi(num2String);

      if (num1Int && num2Int >= 0) {
        if (num1Int > num2Int) {
          greater = num1Int;
        } else {
          greater = num2Int;
        }
        do {
          if (greater % num1Int == 0 && greater % num2Int == 0) {
            lcm = greater;
            std::cout << "The LCM of " <<  num1Int;
            std::cout << " and " << num2Int << " is " << lcm << ".\n";
            std::cout << "Thanks for playing!";
            break;
          } else {
            greater += 1;
          }
        } while (true);
        return 0;
      } else {
          std::cout << "Please enter whole numbers!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << "These are invalid values!\n";
    }
}

int choiceOne() {
  // declaring variables
  int num1Int, num2Int, gcf;
  std::string num1String;
  std::string num2String;

  // get the user number as a string
  std::cout << "Enter the first whole number: ";
  std::cin >> num1String;
  std::cout << "Enter the second whole number: ";
  std::cin >> num2String;
  std::cout << std::endl;

  try {
      // convert the user's number to an int
      num1Int = std::stoi(num1String);
      num2Int = std::stoi(num2String);

      if (num1Int && num2Int >= 0) {
        // calculate the sum of all numbers from 0 to user number
        for (int counter = 1; counter <= num2Int; ++counter) {
          if (num1Int % counter == 0 && num2Int % counter == 0) {
            gcf = counter;
          }
        }
        std::cout << "The GCF of " <<  num1Int;
        std::cout << " and " << num2Int << " is " << gcf << ".\n";
        std::cout << "Thanks for playing!\n";

        return 0;
      } else {
          std::cout << "Please enter whole numbers!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << "These are invalid values!\n";
    }
}

int newNums() {
  std::string option1 = "1";
  std::string option2 = "2";
  std::string option3 = "3";
  std::string answer;

  // gets response from user
  std::cout << "Do you want to find the GCF of other numbers ";
  std::cout << "(1), the LCM of other numbers (2), or neither (3)?: ";
  std::cin >> answer;
  std::cout << std::endl;

  if (answer == option1) {
    choiceOne();
  } else if (answer == option2) {
    choiceTwo();
  } else if (answer == option3) {
    std::cout << "Thanks for playing!\n";
  } else {
      std::cout << "Please type a valid response!\n";
      std::cout << std::endl;
      newNums();
  }
}

int main() {
  // declaring variables
  int num1Int, num2Int, gcf;
  std::string num1String;
  std::string num2String;

  // display opening message
  std::cout << "Today we will calculate the GCF of two whole numbers!\n";
  std::cout << std::endl;

  // get the user number as a string
  std::cout << "Enter the first whole number: ";
  std::cin >> num1String;
  std::cout << "Enter the second whole number: ";
  std::cin >> num2String;
  std::cout << std::endl;

  try {
      // convert the user's number to an int
      num1Int = std::stoi(num1String);
      num2Int = std::stoi(num2String);

      if (num1Int && num2Int >= 0) {
        // calculate the sum of all numbers from 0 to user number
        for (int counter = 1; counter <= num2Int; ++counter) {
          if (num1Int % counter == 0 && num2Int % counter == 0) {
            gcf = counter;
          }
        }
        std::cout << "The GCF of " <<  num1Int << " and ";
        std::cout << num2Int << " is " << gcf << ".\n";
        std::cout << std::endl;
        newNums();

        return 0;
      } else {
          std::cout << "Please enter whole numbers!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << "These are invalid values!\n";
    }
}

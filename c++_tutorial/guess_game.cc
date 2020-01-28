/**
 * @file guess_game.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief A guess game using do while loop
 * @version 0.1
 * @date 2020-01-28
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(int argc, const char** argv) {
  srand(time(NULL));
  int secret_num = std::rand() % 11;
  int guess = 0;
  do {
    std::cout << "Guess the number [1-10]: ";
    std::cin >> guess;
    if (guess > secret_num) {
      std::cout << "Too big!\n";
    } else if (guess < secret_num) {
      std::cout << "Too small!\n";
    }
  } while (guess != secret_num);

  std::cout << "You guessed it !!!\n";
  return 0;
}
/**
 * @file vector_to_string.cc
 * @author Aashish Patel (aashish.a.patel@gmail.com)
 * @brief Vector to string conversion and vice versa
 * @version 0.1
 * @date 2020-01-31
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/**
 * @brief Converts string to vector of strings
 *
 * @param in_str, input string
 * @param separater, string separater
 * @return std::vector<std::string>, output vector of strings
 */
std::vector<std::string> StringToVector(std::string in_str, char separater) {
  std::stringstream s_stream(in_str);
  std::vector<std::string> out_vec;
  std::string word;
  while (getline(s_stream, word, separater)) {
    out_vec.push_back(word);
  }
  return out_vec;
}

/**
 * @brief Converts vector of strings to string
 *
 * @param in_vec, input vector of strings
 * @return std::string, output string
 */
std::string VectorToString(std::vector<std::string> in_vec, char separater) {
  std::string out_str;
  for (auto w : in_vec) {
    out_str.append(w + separater);
  }
  return out_str;
}

int main(int argc, const char** argv) {
  std::string in_str;
  std::vector<std::string> words;

  std::cout << "Enter a string: ";
  std::getline(std::cin, in_str);

  words = StringToVector(in_str, ' ');

  for (auto w : words) {
    std::cout << w << std::endl;
  }

  std::string out_str = VectorToString(words, ' ');
  std::cout << "Output: " << out_str << std::endl;

  in_str.clear();
  out_str.clear();

  return 0;
}
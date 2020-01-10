#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
  std::string input_string = "Hello, this is a test string!";
  std::string word;
  // Dynamic size arrays
  std::vector<std::string> words;
  // Creates a stream out of a string
  std::stringstream input_stream(input_string);
  // getline() is used to get individual words out of the string stream
  while (getline(input_stream, word, ' ')) {
    words.push_back(word);
  }

  for (int i = 0; i < words.size(); i++) {
    std::cout << words[i] << std::endl;
  }

  return 0;
}
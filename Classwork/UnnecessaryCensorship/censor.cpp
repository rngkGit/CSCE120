#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define debug(X) std::cout << "[DEBUG] (" << __func__ << ":" << __LINE__ << ") " << #X << "=" << X << std::endl;

// get list of words to censor from stream
std::string get_censor_words(std::istream& stream);
// censor the line using the words provided
std::string censor(std::string line, const std::string& censor_words);

int main() {
  // set filenames - hardcoded but could update to read from cin
  std::string censor_words_filename = "censorwords.txt";
  std::string original_text_filename = "input.txt";
  //std::string original_text_filename = "Untitled_Song.ogg";
  std::string censored_text_filename = "censored.txt";

  // create filestreams
  std::ifstream censor_in(censor_words_filename);
  std::ifstream original_in(original_text_filename);
  std::ofstream censor_out(censored_text_filename);

  // TODO(student): add code to check whether the streams are open
  //                if not, print an error and exit
  if (!censor_in.is_open()) {
    debug("Failed to open censorwords.txt");
    return 1;
  }

  if (!original_in.is_open()) {
    debug("Failed to open input.txt");
    return 1;
  }

  if (!censor_out.is_open()) {
    debug("Failed to create censored.txt");
    return 1;
  }

  // get list of words to censor from file
  std::string censor_words = get_censor_words(censor_in);
  debug(censor_words);

  // read original text, censor text, write out updated text to output file
  // process text line by line, until the end of the file
  while (!original_in.eof()) {
    // 1) get next line
    std::string line;
    getline(original_in, line);

    // TODO(student): add code to check if getline executed properly
    //                if not, print a warning, recover, and continue
    if (original_in.fail()) {
      debug("Warning: Failed to read in line, recovering...");
      line = "";
      continue;
    }

    debug(line);

    // 2) censor the line
    std::string line_out = censor(line, censor_words);
    debug(line_out);

    // 3) write the censored line to output file
    censor_out << line_out << std::endl;
  }

  // no need to close fstreams because this is done by their destructors
  return 0;
}

// lowercase all letters in the string
std::string tolower(std::string str) {
  for (size_t i=0; i < str.size(); ++i) {
    str.at(i) = tolower(str.at(i));
  }
  return str;
}

// get the string that will replace the word
std::string get_replace(std::string str) {
  return std::string(str.length(), '*');
}

std::string censor(std::string line, const std::string& censor_words) {
  // treat the list of censor words as an input stream
  std::istringstream censor_word_stream(censor_words);
  // while there are censor words to process
  std::string censor_word;
  while (censor_word_stream >> censor_word) {
    // make a temporary, lowercased copy of the string
    // to use for matching against censor words
    std::string lowerLine = tolower(line);
    size_t position = lowerLine.find(censor_word);
    while (position != std::string::npos) {
      debug(censor_word); debug(position);
      lowerLine.replace(position, censor_word.size(), get_replace(censor_word));
      line.replace(position, censor_word.size(), get_replace(censor_word));
      position = lowerLine.find(censor_word);
    }
  }
  return line;
}

std::string get_censor_words(std::istream& stream) {
  std::string censor_words;
  std::string censor_word;
  while (stream >> censor_word) {
    // the >> operator will use whitespace to determine the end of the string
    // failure checking is built in:
    //   the >> operator returns a reference to the stream,
    //   evaluating the stream as a boolean returns the same value as the stream's fail() function

    // lowercase and append the new word to a string with all the censor words
    censor_words += (" " + tolower(censor_word));
  }
  return censor_words;
}

#ifndef repl_h
#define repl_h

#include <string>

std::string read();
std::vector<std::string> extractStatements(std::string input, bool debug);
std::vector<std::string> tokenize(std::string input, bool debug);
void analyze(std::string input, bool debug);
void print(std::string out);
void prompt();

#endif
#ifndef __FONCTION_H__
#define __FONCTION_H__

#include <string>

void menu();
std::string enterString();
void stringSize(std::string input);
bool isVowel(char input);
int countVowel(std::string input);
int countConsonant(std::string input);
bool isConsonant(char input);
bool isLetter(char input);
std::string deleteCaracter(std::string input, char caraToDelete);
std::string concatenateString(std::string string1, std::string string2);
std::string up1ToAsciiOfString(std::string input);

#endif
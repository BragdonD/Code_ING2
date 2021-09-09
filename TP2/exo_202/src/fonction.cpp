#include <iostream>
#include "fonction.h"

std::string enterString(){
    std::string input;
    std::cout << "Write a string : " << std::endl;
    std::cin >> input;
    return input; 
}

void stringSize(std::string input){
    std::cout << "The input string size is " << input.size() << std::endl;
}

int countVowel(std::string input){
    int vowelCounter(0);
    for(int i=0; i<input.size(); i++){
        if(isVowel(input[i])){
            vowelCounter++;
        }
    }
    return vowelCounter;
}

bool isVowel(char input){
    return (input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U');
}

bool isLetter(char input){
    return ((input >= 65 && input <= 90) || (input >= 97 && input <= 122));
}

bool isConsonant(char input){
    return (isLetter(input) && !isVowel(input));
}

int countConsonant(std::string input){
    int consonantCounter(0);
    for(int i=0; i<input.size(); i++){
        if(isConsonant(input[i])){
            consonantCounter++;
        }
    }
    return consonantCounter;
}

std::string deleteCaracter(std::string input, char caraToDelete){
    return input.erase(caraToDelete);
}

std::string concatenateString(std::string string1, std::string string2){
    if(string1[string1.size()-1] == ' '){
        return string1 + string2;
    }
    else{
        return string1 + ' ' + string2;
    }
}

std::string up1ToAsciiOfString(std::string input){
    std::string output;

    for(int i=0; i<input.size();i++){
        if(input[i]!='z' || input[i]!='Z'){
           output.push_back(input[i]+1); 
        }
        else if(input[i]=='z'){
            output.push_back('a'); 
        }
        else if(input[i]=='Z'){
            output.push_back('A'); 
        }
    }
    return output;
}

void menu(){
    std::cout << "Make a choice between the following propositions :" << std::endl;
    std::cout << "1. Type a string." << std::endl;
    std::cout << "2. Calculate the string size." << std::endl;
    std::cout << "3. Count te number of vowels and consonant into the string." << std::endl;
    std::cout << "4. Delete a character from the string." << std::endl;
    std::cout << "5. Concatenate two string." << std::endl;
    std::cout << "6. Moove up from 1 ascii code the letters of the string." << std::endl;
    std::cout << "7 Leave." << std::endl;
}

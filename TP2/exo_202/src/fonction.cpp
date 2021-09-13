#include <iostream>
#include "fonction.h"
///Fonction permettant de saisir une string et de la renvoyer en resultat
std::string enterString(){
    std::string input;
    std::cout << "Write a string : " << std::endl;
    std::cin >> input;
    return input; 
}
///Fonction affichant la taille d'une string passée en paramètre
void stringSize(std::string input){
    std::cout << "The input string size is " << input.size() << std::endl;
}
///Fonction comptant le nombre de voyelle dans une string passée en paramètre
///retourne le nombre à la fin
int countVowel(std::string input){
    int vowelCounter(0);
    for(int i=0; i<input.size(); i++){
        if(isVowel(input[i])){
            vowelCounter++;
        }
    }
    return vowelCounter;
}
///fonction testant si l'input est une voyelle retourne le resultat sous la forme d'un booleen
bool isVowel(char input){
    return (input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U');
}
///fonction testant si l'input est une lettre retourne le résultat sous la forme d'un booleen
bool isLetter(char input){
    return ((input >= 65 && input <= 90) || (input >= 97 && input <= 122));
}
///fonction testant si l'input est une consonne
bool isConsonant(char input){
    ///On test si la lettre est une lettre et si elle n'est pas une voyelle
    return (isLetter(input) && !isVowel(input));
}
///fonction comptant le nombre de consonnes dans une string envoyé en parametre
int countConsonant(std::string input){
    int consonantCounter(0);
    ///boucle tant que la fin de la string n'est pas atteinte
    for(int i=0; i<input.size(); i++){
        ///test si le caractere est une consonne
        if(isConsonant(input[i])){
            consonantCounter++;
        }
    }
    return consonantCounter;
}
///fonction permettant d'effacer un caractere dans uen string passée en paramètre
std::string deleteCaracter(std::string input, char caraToDelete){
    ///utilisation de la méthode de la classe string permettant de supprimer un caractere de la chaine
    return input.erase(caraToDelete);
}
///
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

#include <iostream>
#include "file.h"

std::unordered_set<std::string> GetTheDictionnary(){
    //file related variable
    std::string path("words.txt");
    std::ifstream ifs(path.c_str());
    //hash table related variable
    std::unordered_set<std::string> myDictio;

    if(ifs.is_open()){
        std::string line;
        std::cout << "The file has been corectly open" << std::endl;
        while(std::getline(ifs,line)){
            if(line.find('\n')<line.size()){
                line.erase(line.find('\n'));
            }
            myDictio.insert({line});
        }
        //optional
        ifs.close();
        std::cout << "The data has been extracted" << std::endl;
    }
    else{
        std::cout << "Failed to open the file at " << path << std::endl;
    }
    return myDictio;
}
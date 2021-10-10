#include <iostream>
#include "hashTable.h"

bool DoesTheWordExist(const std::string& valueToTest, const std::unordered_set<std::string>& Dictionary){
    if(Dictionary.find(valueToTest)!=Dictionary.end()){
        return true;
    }
    return false;
}



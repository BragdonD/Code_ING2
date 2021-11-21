#include <iostream>
#include "function.h"

float Average(std::vector<int> vec){
    float average = 0.0f;

    for(const auto& it : vec){
        try{
            if(it > 0)
                average += it;
            else
                throw std::exception();
        }
        catch(const std::exception& e){
            std::cerr << e.what() << std::endl;
            return 0;
        }
    }

    return average/(float)vec.size();

}
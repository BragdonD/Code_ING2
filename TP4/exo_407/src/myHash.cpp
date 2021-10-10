#include <iostream>
#include "myHash.h"

std::unordered_map<std::size_t,std::string,hashFunc, std::equal_to<std::size_t>> GetTheDictionary(){
    std::string path("words.txt");
    std::ifstream ifs(path.c_str());
    //hash table related variable
    std::unordered_map<std::size_t,std::string,hashFunc, std::equal_to<std::size_t>> myDictio;

    if(ifs.is_open()){
        std::chrono::high_resolution_clock::time_point start, end;
        std::string line;
        hashFunc myHashFunction;
        size_t index;
        std::cout << "The file has been corectly open" << std::endl;
        start = std::chrono::high_resolution_clock::now();
        while(std::getline(ifs,line)){
            if(line.find('\n')<line.size()){
                line.erase(line.find('\n'));
            }
            index = myHashFunction[line]; 
            //std::cout << index << std::endl;
            myDictio.insert({myHashFunction(index), line});
        }
        end = std::chrono::high_resolution_clock::now();
        GetTimeInProgram(start,end);
        //optional
        ifs.close();
        std::cout << "The data has been extracted" << std::endl;
    }
    else{
        std::cout << "Failed to open the file at " << path << std::endl;
    }
    return myDictio;
}

bool DoesTheWordExist(std::string& value, std::unordered_map<std::size_t,std::string,hashFunc, std::equal_to<std::size_t>>& dictionary){
    hashFunc myHashFunction;
    int key = myHashFunction[value];
    std::chrono::high_resolution_clock::time_point start, end;
    start = std::chrono::high_resolution_clock::now();
    //std::cout << "the key of the word is : " << key << std::endl;
    if(dictionary.find(key)!=dictionary.end()){
        std::cout << dictionary.find(key)->second <<std::endl;
        end = std::chrono::high_resolution_clock::now();
        GetTimeInProgram(start,end);
        return true;
    }
    end = std::chrono::high_resolution_clock::now();
    GetTimeInProgram(start,end);
    return false;
}

void GetTimeInProgram(std::chrono::high_resolution_clock::time_point& start, std::chrono::high_resolution_clock::time_point& end){
    auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end-start);
    std::cout << "Time to get dictionary is : " << duration1.count()  << " ns."<< std::endl;

    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    std::cout << "Time to get dictionary is : " << duration2.count()  << " us."<< std::endl;

    auto duration3 = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
    std::cout << "Time to get dictionary is : " << duration3.count()  << " ms."<< std::endl;

    auto duration4 = std::chrono::duration_cast<std::chrono::seconds>(end-start);
    std::cout << "Time to get dictionary is : " << duration4.count()  << " s."<< std::endl;

    auto duration5 = std::chrono::duration_cast<std::chrono::minutes>(end-start);
    std::cout << "Time to get dictionary is : " << duration5.count()  << " m."<< std::endl;
}
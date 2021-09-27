#include <iostream>
#include "printer.h"

printer::printer(/* args */){}
printer::~printer(){}

void printer::addFile(file n_file){
    m_myFiles.push(n_file);
}

void printer::RemoveFirstFile(){
    m_myFiles.pop();
}

file printer::getFirstFile() const{
    return m_myFiles.front();
}

std::queue<file> printer::getQueueFile() const{
    return m_myFiles;
}

void printer::printAllFiles(){
    std::queue<file> temp;
    for(int i=0; i<getQueueFile().size(); i++){
        getFirstFile().printFile();
        temp.push(getFirstFile());
        RemoveFirstFile();
    }
    for(int i=0; i<temp.size(); i++){
        addFile(temp.front());
        temp.pop();
    }
}

void printer::deleteAllFiles(){
    for(int i=0; i<getQueueFile().size(); i++){
        RemoveFirstFile();
    }
}

void printer::deleteFileById(std::string searchId){
    std::queue<file> temp;
    for(int i=0; i<getQueueFile().size(); i++){
        if(getFirstFile().getId() == searchId){
            RemoveFirstFile();
            std::cout << "The filehas been deleted" << std::endl;
        }
        else{
            temp.push(getFirstFile());
            RemoveFirstFile();
        }
    }
    for(int i=0; i<temp.size(); i++){
        addFile(temp.front());
        temp.pop();
    }
}

void printer::deleteFileByName(std::string searchName){
    std::queue<file> temp;
    for(int i=0; i<getQueueFile().size(); i++){
        if(getFirstFile().getName() == searchName){
            RemoveFirstFile();
            std::cout << "The filehas been deleted" << std::endl;
        }
        else{
            temp.push(getFirstFile());
            RemoveFirstFile();
        }
    }
    for(int i=0; i<temp.size(); i++){
        addFile(temp.front());
        temp.pop();
    }
}
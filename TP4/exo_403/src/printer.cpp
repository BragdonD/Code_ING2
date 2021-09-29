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
    int queueSize = getQueueFile().size();
    for(int i=0; i<queueSize; i++){
        getFirstFile().printFile();
        temp.push(getFirstFile());
        RemoveFirstFile();
    }
    queueSize = temp.size();
    for(int i=0; i<queueSize; i++){
        addFile(temp.front());
        temp.pop();
    }
}

void printer::deleteAllFiles(){
    int size = getQueueFile().size();
    for(int i=0; i< size; i++){
        RemoveFirstFile();
    }
}

void printer::deleteFileById(std::string searchId){
    std::queue<file> temp;
    int queueSize = getQueueFile().size();
    for(int i=0; i< queueSize; i++){
        if(getFirstFile().getId() == searchId){
            RemoveFirstFile();
            std::cout << "The filehas been deleted" << std::endl;
        }
        else{
            temp.push(getFirstFile());
            RemoveFirstFile();
        }
    }
    queueSize = temp.size();
    for(int i=0; i<queueSize; i++){
        addFile(temp.front());
        temp.pop();
    }
}

void printer::deleteFileByName(std::string searchName){
    std::queue<file> temp;
    int queueSize = getQueueFile().size();
    for(int i=0; i<queueSize; i++){
        if(getFirstFile().getName() == searchName){
            RemoveFirstFile();
            std::cout << "The filehas been deleted" << std::endl;
        }
        else{
            temp.push(getFirstFile());
            RemoveFirstFile();
        }
    }
    queueSize = temp.size();
    for(int i=0; i<queueSize; i++){
        addFile(temp.front());
        temp.pop();
    }
}
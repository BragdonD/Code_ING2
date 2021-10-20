#ifndef __PRINTER_H__
#define __PRINTER_H__
#pragma once

#include <queue>
#include "file.h"

class printer
{
    private:
        std::queue<file> m_myFiles;
        
    public:
        printer(/* args */);
        ~printer();
        void addFile(file n_file);
        void RemoveFirstFile();
        std::queue<file> getQueueFile() const;
        file getFirstFile() const;
        void printAllFiles();
        void deleteAllFiles();
        void deleteFileById(std::string searchId);
        void deleteFileByName(std::string searchName);

};




#endif
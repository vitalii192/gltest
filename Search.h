#pragma once
#include <iostream>
#include <dirent.h>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

class Search
{
    private:
        std::string FullPath = "/";
        std::vector<std::string> LibraryNames;
        std::vector<int> size;
        int first_size = 0;
    public:
        void ReadCurDirectory(const char* path);
        void SearchFile(std::string);
        void RecursDo();
        void ShowVector();
        
};
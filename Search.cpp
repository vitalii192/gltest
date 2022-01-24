#include "Search.h"

void Search::ReadCurDirectory(const char* path )
{
    DIR *dir;
     struct dirent *ent;
     if ((dir = opendir (path)) != NULL) 
      {
         /* print all the files and directories within directory */
           while ((ent = readdir(dir)) != NULL) 
           {
              LibraryNames.push_back(ent->d_name);
           }
           closedir (dir);
      }   
      else 
      {
        /* could not open directory */
          perror ("");
          //return EXIT_FAILURE;
      } 
}

void Search::SearchFile(std::string str)
{
   for(int i = first_size; i < LibraryNames.size(); i++)
   {
     if(LibraryNames[i] == str)
     {
       std::cout << FullPath + str << std::endl;
     }
   }
}

void Search::RecursDo()
{
  size.push_back(LibraryNames.size());
  for (size_t i = first_size; i < LibraryNames.size(); i++)
  {
    std::string p = FullPath + LibraryNames[i] + "/";
    char* c = const_cast<char*>(p.c_str());
    ReadCurDirectory(c);
    p.erase();
  }
}

 void Search::ShowVector()
 {
     for (size_t i = 0; i < LibraryNames.size(); i++)
     {
       std::cout << LibraryNames[i] << std::endl;
     }
 }
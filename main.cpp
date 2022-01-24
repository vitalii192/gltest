#include <iostream>
#include <dirent.h>
#include "Search.h"

int main()
{
    Search sr;
    sr.ReadCurDirectory("/");
    sr.SearchFile("root");
    return 0;
}
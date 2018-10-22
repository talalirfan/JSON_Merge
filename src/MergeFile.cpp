#include "MergeFile.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace nlohmann;


MergeFile::MergeFile(string inputFile1, string inputFile2)
{
   ifstream i(inputFile1);

   i >> jsonObj1;


   ifstream a(inputFile2);
   a >> jsonObj2;
}


void MergeFile::merge()
{
   jsonObj1.merge_patch(jsonObj2);
}


void MergeFile::display()
{
   std::cout << setw(4) << jsonObj1 << endl;
}


void MergeFile::write(string outputFile)
{
   std::ofstream o(outputFile);
   o << std::setw(4) << jsonObj1 << std::endl;
}

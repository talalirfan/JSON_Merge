#pragma

#include "json.hpp"

using namespace nlohmann;
using namespace std;


class MergeFile {
private:
   json jsonObj1, jsonObj2;

public:
   MergeFile(string inputFile1, string inputFile2);

   void merge();

   void display();

   void write(string a);
};

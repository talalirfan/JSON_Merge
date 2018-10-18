#include<iostream>
#include <iomanip>
#include "json.hpp"
#include"MergeFile.h"
#include <fstream>

using namespace nlohmann;
//using namespace std;

int main(int argc, char** argv){
	string s1 = argv[1];
	string s2 = argv[2];

	MergeFile a(s1,s2);
	a.merge();
	a.display();
	

return 0;
}

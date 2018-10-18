#include<iostream>
#include <iomanip>
#include "json.hpp"
#include"MergeFile.h"
#include <fstream>

using namespace nlohmann;
//using namespace std;

int main(){
	string s1 = "file1.json";
	string s2 = "file2.json";

	MergeFile a(s1,s2);
	a.merge();
	a.display();
	

return 0;
}

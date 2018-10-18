#include<iostream>
#include <iomanip>
#include "json.hpp"


#include <fstream>
 using namespace nlohmann;
//using namespace std;

int main(){
std::string str ="file1.json" ;
std::ifstream i(str);
json j;
i >> j;
//std::cout<<i;
std::ifstream a("file2.json");
json b;
a >> b;


j.merge_patch(b);

std::cout<<j;

// write prettified JSON to another file
std::ofstream o("pretty.json");
o << std::setw(4) << j << std::endl;
	

return 0;
}

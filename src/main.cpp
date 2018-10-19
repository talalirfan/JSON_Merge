#include<iostream>
#include <iomanip>
#include "json.hpp"
#include"MergeFile.h"
#include <fstream>
#include<boost/program_options.hpp>

using namespace nlohmann;


namespace opt = boost::program_options;

int main(int argc, char* argv[]){

	opt::options_description desc("All Options");

	desc.add_options()
		("o", "Print on console")
		("f", "Print on file")
		("help", "help message");


	opt::variables_map vm;

	opt::store(opt::parse_command_line(argc,argv,desc),vm);


	opt::notify(vm);

	if(vm.count("help")){
		std::cout<<desc<<"\n";
	}	


	if(vm.count("o")){
		string s1 = argv[2];
		string s2 = argv[3];

		MergeFile a(s1,s2);
		a.merge();
		a.display();
	}

	if(vm.count("f")){
		string s1 = argv[2];
		string s2 = argv[3];

		MergeFile a(s1,s2);
		a.merge();
		a.write();
	}

return 0;
}

#include "MergeFile.h"
#include<iostream>
#include <iomanip>
#include "json.hpp"
#include <fstream>

using namespace nlohmann;
using namespace std;

		MergeFile :: MergeFile(string s1, string s2){

			
			ifstream i(s1);
			i >> f1;
			

			ifstream a(s2);
			a >> f2;


		}



		void MergeFile :: merge(){

			f1.merge_patch(f2);

		}



		void MergeFile :: display(){

			std::cout << setw(4) << f1 << endl;

		}



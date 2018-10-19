#ifndef MergeFile_H
#define MergeFile_H


#include <iomanip>
#include "json.hpp"
#include <fstream>

using namespace nlohmann;
using namespace std;


class MergeFile{

	private:
		json f1,f2;

	public:
		MergeFile(string s1, string s2);



		void merge();



		void display();

		void write();



};

#endif

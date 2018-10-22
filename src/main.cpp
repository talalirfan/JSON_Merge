#include <iostream>
#include <iomanip>
#include "json.hpp"
#include "MergeFile.h"
#include <fstream>
#include <boost/program_options.hpp>

using namespace nlohmann;


namespace opt = boost::program_options;

int main(int argc, char *argv[])
{
   try {
      opt::options_description desc("All Options");

      desc.add_options()
         ("o", "Print on console  ./merge --o 'filename1' 'filename2'")
         ("f", "Print on file  ./merge --f 'filename1' 'filename2' 'outputFilename'")
         ("help", "options");



      opt::variables_map vm;

      opt::store(opt::parse_command_line(argc, argv, desc), vm);


      opt::notify(vm);



      if (vm.count("help"))
      {
         std::cout << desc << "\n";
      }



      if ((argv[2] == NULL) || (argv[3] == NULL))
      {
         throw "Enter valid input filenames";
      }



      string inputFile1 = argv[2];
      string inputFile2 = argv[3];

      MergeFile a(inputFile1, inputFile2);
      a.merge();



      if (vm.count("o"))
      {
         a.display();
      }

      if (vm.count("f"))
      {
         if (argv[4] == NULL)
         {
            throw "Enter output filename";
         }

         a.write(argv[4]);
      }
   }
   catch (const char *msg)
   {
      cout << msg << endl;
      return 0;
   }


   catch (...)
   {
      cout << "Not a valid JSON input file" << endl;
      return 0;
   }



   return 0;
}

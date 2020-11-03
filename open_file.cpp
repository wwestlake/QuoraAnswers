// open_file.cpp 

#include <iostream>
#include <fstream>
int main(int argc, char ** argv)
{
    std::string line;

    if (argc < 2 || argc > 2)
    {
        std::cout << "USAGE: " << argv[0] << " " << "[filename]" << std::endl;
        exit(1);
    }

    std::ifstream in_stream;
    in_stream.open(argv[1]);

    if (!in_stream)
    {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    while (! in_stream.eof())
    {
        std::getline(in_stream, line);
        std::cout << line << std::endl;
    }

    return 0;
}

/* output
wwestlake@bill-ubuntu:~/Projects/QuoraAnswers$ g++ open_file.cpp -o open_file
wwestlake@bill-ubuntu:~/Projects/QuoraAnswers$ ./open_file 
USAGE: ./open_file [filename]
wwestlake@bill-ubuntu:~/Projects/QuoraAnswers$ ./open_file open_file.cpp 
// open_file.cpp 

#include <iostream>
#include <fstream>
int main(int argc, char ** argv)
{
.
.
.
}

wwestlake@bill-ubuntu:~/Projects/QuoraAnswers$ ./open_file grabag
Unable to open file: grabag
wwestlake@bill-ubuntu:~/Projects/QuoraAnswers$ 

*/
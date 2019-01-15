#include "dirparser.h"

using namespace boost::filesystem;

int main(int argc, char *argv[])
{
    if (argc < 2){
        std::cerr << "error" << std::endl;
        return 1;
    }
    try {
        dirparser parser(argv[1]);
        parser.parse();
        parser.print_info();
    }
    catch (const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
    catch (...) {
        std::cerr << "unknown exception" << std::endl;
    }

    std::cin.get();
    return 0;
}

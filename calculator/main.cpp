#include "boost/filesystem.hpp"
#include <iostream>

using namespace boost::filesystem;

int main () {
    create_directory( "foobar" );
    ofstream file( "foobar/cheeze" );
    file << "tastes good!\n";
    file.close();
    if (!exists( "foobar/cheeze")) {
        std::cout << "Something is rotten in foobar\n";
    }
    else {
        std::cout << "tastes good!" << std::endl;
    }
}
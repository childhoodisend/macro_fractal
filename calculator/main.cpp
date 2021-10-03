#include "boost/filesystem.hpp"
#include <iostream>

using namespace boost::filesystem;

int main () {
    create_directory( "foobar" );
}
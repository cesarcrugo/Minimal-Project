#include <sum.hpp>
#include <iostream>
#include <string>

int main(int argc, char **argv){
    sum s;
    int res = s.add2Integers (std::stoi(argv[1]), std::stoi(argv[2]));
    std::cout << "Sum: " << res << std::endl;

    return 0;
}
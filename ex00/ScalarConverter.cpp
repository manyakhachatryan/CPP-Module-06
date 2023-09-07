#include "ScalarConverter.hpp"

 void ScalarConverter::convert(char * str)
 {
    // std::cout<<str<<std::endl;
    double d1;
    char *ptr;
    d1 = strtod(str, &ptr);
    std::cout<<"d1=>"<<d1<<std::endl;
    std::cout<<"ptr=>"<<ptr<<std::endl;
    // std::cout<<num<<std::endl;
    std::cout<<"convert function"<<std::endl;
}
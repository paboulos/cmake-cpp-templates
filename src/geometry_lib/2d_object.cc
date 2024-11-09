#include "2d_object.hpp"
#include <iostream>


Inventory::Tool::Tool( std::string name, float charge, float consumption )
    : name{ name }, charge{ charge }, powerconsumption{ consumption } {};

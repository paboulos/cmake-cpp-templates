#pragma once
#include "position.hpp"
#include "2d_compute.hpp"
#include <iostream>

namespace Inventory
{
class Object
{
public:
    Object( std::string name, Geometry::Position<int> pos, float mass, int damage )
        : name{ name }, position{ position }, mass{ mass }
    {
    }
    std::string name;
    Geometry::Position<int> position;
    float mass;
};

class Appliance
{
public:
    Appliance( std::string name, Geometry::Position<int> pos, int health, int damage )
        : name{ name }, position{ position }, health{ health }, damage{ damage }
    {
    }
    std::string name;
    Geometry::Position<int> position;
    int health;
    int damage;
};


/**
 * @brief Special Template
 *
 * @tparam
 */
template <>
struct is_repairable<Appliance> : std::true_type
{
};


/**
 * Tools fix appliance
 * @brief
 *
 */
class Tool
{
    Tool( std::string name, float charge, float powerconsumption );

public:
    std::string name;
    float charge;
    float powerconsumption;
};

} // namespace Inventory

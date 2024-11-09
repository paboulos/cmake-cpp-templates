#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>

#include "config.hpp"
#include "position.hpp"
#include "2d_compute.hpp"
#include "2d_object.hpp"
int main()
{
    std::cout << "Project name " << project_name << std::endl;
    std::cout << "Project version " << project_version << std::endl;

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    Geometry::Position<int> intPosition1(4, 5);
    Geometry::Position<int> intPosition2(2, 8);
    Geometry::Position<long> longPosition(3, 4);
    Geometry::Position<float> floatPosition(3.5, 5.2);
    std::cout << "Distance " << Geometry::distanceBetween(intPosition1, intPosition2) << std::endl;
    std::cout << "Average " << Geometry::Average<int,int>(6, 2) << std::endl;

    Inventory::Appliance appliance("oven",intPosition1,0,0);
    Inventory::Object object("rock",intPosition2, 1,0);
    appliance.damage = 10;
    std::cout << appliance.name << ", Health " << appliance.health << ", Damage " << appliance.damage << std::endl;
    Inventory::Repair(appliance);
    std::cout << appliance.name << ", Health " << appliance.health << ", Damage " << appliance.damage << std::endl;
    return 0;
}

#pragma once
#include <iostream>
#include <type_traits>
#include <cstdint>

uint32_t factorial(uint32_t number);
uint64_t fibonacci(uint64_t number);

namespace Inventory
{
/**
 * @brief  General Template
 *
 * @tparam typename
 */
template <typename>
struct is_repairable : std::false_type
{
};
template <typename T>
constexpr bool is_repairable_v{ is_repairable<T>::value };

template <typename T, std::enable_if_t<is_repairable_v<T>, int> = 0>
void Repair( T &Param )
{
    Param.health += 100;
    Param.damage = 0;
    std::cout << Param.name << " fixed" << std::endl;
}
} // namespace Inventory

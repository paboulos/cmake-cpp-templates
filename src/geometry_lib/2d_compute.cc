#include "2d_compute.hpp"

uint32_t factorial( uint32_t number ) {
    return number <= 1 ? 1 : factorial(number-1) * number;
}

uint64_t fibonacci(uint64_t number) {
    return number < 2 ? number : fibonacci(number - 1) + fibonacci(number - 2);
}

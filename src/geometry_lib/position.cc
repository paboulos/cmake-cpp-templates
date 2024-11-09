#include "position.hpp"

/**
 * Funtion Definitions and Type Declarations Required for linking
 */

/**
 * @brief Implementation of the Average Function Template
 *
 * @tparam T1
 * @tparam T2
 * @param x
 * @param y
 * @return
 */
template <typename T1, typename T2>
auto Geometry::Average( T1 x, T2 y ) -> decltype((x + y) / 2)
{
    return ( x + y ) / 2;
};

/**
 * @brief Implementation of the distanceBetween Function Template
 *
 * @tparam T
 * @param p1
 * @param p2
 * @return
 */
template <class T>
float Geometry::distanceBetween( Position<T> &p1, Position<T> &p2 )
{
    float dx = p1.getX() - p2.getX();
    float dy = p1.getY() - p2.getY();
    return sqrt( dx * dx + dy * dy );
}

template int Geometry::Average<int, int>( int, int );
template float Geometry::distanceBetween<int>(Geometry::Position<int> &,Geometry::Position<int>&);

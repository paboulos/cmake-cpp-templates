#pragma once
#include <cmath>

namespace Geometry
{
template <class T>
class Position
{
public:
    Position( T x, T y )
    {
        m_x = x;
        m_y = y;
    }
    Position( const Position<T> &position )
    {
        m_x = position.m_x;
        m_y = position.m_y;
    }
    Position &operator=( const Position &position )
    {
        return *this;
    }
    T const getX()
    {
        return m_x;
    }
    T const getY()
    {
        return m_y;
    }

private:
    T m_x;
    T m_y;
};

template <class T>
float distanceBetween( Position<T> &p1, Position<T> &p2 );

template <typename T1 = int, typename T2 = T1>
auto Average(T1 x, T2 y) -> decltype((x + y) / 2);
} // namespace Geometry

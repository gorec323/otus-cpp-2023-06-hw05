#pragma once

#include "point.hpp"

namespace graphpr {

/// @brief интерфейс класс пайнтера
struct IPainter
{
    virtual ~IPainter() = default;

    /// @brief Отрисовка линии из точки @ref pos1 в точку @ref pos2
    /// @param pos1 
    /// @param pos2 
    virtual void drawLine(const PointD &pos1, const PointD &pos2) = 0;
};

}
/*!
 @file
 @brief Заголовочный файл, содержащий интерфейс модели графического интерфейса.
 */


#pragma once

#include "base_interface.h"
#include <iostream>


class GraphicPrimitive;

///< Тип указателя на модель графического примитива
using GraphicPrimitivePtr = std::shared_ptr<GraphicPrimitive>;


/*!
 Модель графического примитива.
 */
class GraphicPrimitive : public IModel, public std::enable_shared_from_this<GraphicPrimitive> {
public:
    GraphicPrimitive();  ///< Создание графического примитива
    ~GraphicPrimitive(); ///< Удаление графического примитива
};

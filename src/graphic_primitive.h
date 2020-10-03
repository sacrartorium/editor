/*!
 @file
 @brief Заголовочный файл, содержащий интерфейс модели графического интерфейса.
 */


#pragma once

#include "base_interface.h"
#include <iostream>


class GraphicPrimitive;
class GraphicPrimitiveView;

///< Тип указателя на модель графического примитива
using GraphicPrimitivePtr     = std::shared_ptr<GraphicPrimitive>;

///< Тип указателя на графического примитива документа.
using GraphicPrimitiveViewPtr = std::shared_ptr<GraphicPrimitiveView>;


/*!
 Модель графического примитива.
 */
class GraphicPrimitive : public IModel, public std::enable_shared_from_this<GraphicPrimitive> {
public:
    GraphicPrimitive();  ///< Создание графического примитива
    ~GraphicPrimitive(); ///< Удаление графического примитива
};


class GraphicPrimitiveView : public IView, public std::enable_shared_from_this<GraphicPrimitiveView> {
public:
    void render() const override;
    void update(const std::string&) override;
};

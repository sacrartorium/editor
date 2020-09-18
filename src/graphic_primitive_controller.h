/*!
 @file
 @brief Заголовочный файл, содержащий объявление контроллера для графических примитивов.
 */


#pragma once

#include "base_interface.h"
#include "graphic_primitive.h"


class GraphicPrimitiveController;

///< Тип указателя на контроллер графического примитива
using GraphicPrimitiveControllerPtr = std::shared_ptr<GraphicPrimitiveController>;


/*!
 Контроллер графического примитива.
 */
class GraphicPrimitiveController : public IController,
                                   public std::enable_shared_from_this<GraphicPrimitiveController> {
public:
    void notify(IModelPtr modelPtr, std::string event) const override;
    GraphicPrimitivePtr create();  ///< Создание графического примитива.
    void destroy(GraphicPrimitivePtr graphicPrimitivePtr); ///< Удаление графического примитива.
private:
    GraphicPrimitivePtr m_graphicPrimitivePtr;
};

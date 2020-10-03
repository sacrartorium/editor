#pragma once

#include "base_interface.h"
#include "document.h"
#include "graphic_primitive.h"


class Controller : public IController, public std::enable_shared_from_this<Controller> {
public:
    void notify(IModelPtr modelPtr, std::string event) const override;
    
    DocumentPtr createDocument(); ///< Создание документа.
    DocumentViewPtr createDocumentView(); ///< Создание представления документа.
    GraphicPrimitivePtr createGraphicPrimitive();  ///< Создание графического примитива.
    GraphicPrimitiveViewPtr createGraphicPrimitiveView();  ///< Создание представления графического примитива.
    void destroyGraphicPrimitive(GraphicPrimitivePtr); ///< Удаление графического примитива.
    
private:
    GraphicPrimitivePtr m_graphicPrimitivePtr;
    DocumentPtr m_documentPtr; ///< Указатель на документ.
};


using ControllerPtr = std::shared_ptr<Controller>;


ControllerPtr makeController();

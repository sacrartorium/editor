#include "graphic_primitive_controller.h"


/*!
 Оповещение графическим примитивов контроллера о своем действии.
 @param modelPtr Указатель на документ.
 @param event Событие.
 */
void GraphicPrimitiveController::notify(IModelPtr modelPtr, std::string event) const {
    UNUSED(modelPtr);
    
    if (event == "destroy") {
        std::cout << "[GraphicPrimitive][Controller] GraphicPrimitive is destroyed." << std::endl;
    } else if (event == "create") {
        std::cout << "[GraphicPrimitive][Controller] GraphicPrimitive is created." << std::endl;
    }
}


/*!
 Создание графического примитива.
 */
GraphicPrimitivePtr GraphicPrimitiveController::create() {
    m_graphicPrimitivePtr = std::make_shared<GraphicPrimitive>();
    m_graphicPrimitivePtr->setController(shared_from_this());
    notify(m_graphicPrimitivePtr, "create");
    return m_graphicPrimitivePtr;
}


/*!
 Удаление графического примитива.
 @param graphicPrimitivePtr Указатель на удаляемый графический примитив.
 */
void GraphicPrimitiveController::destroy(GraphicPrimitivePtr graphicPrimitivePtr) {
    if (graphicPrimitivePtr == m_graphicPrimitivePtr) {
        m_graphicPrimitivePtr.reset();
    }
}

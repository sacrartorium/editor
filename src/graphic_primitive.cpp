#include "graphic_primitive.h"


GraphicPrimitive::GraphicPrimitive() {
    std::cout << "[GraphicPrimitive][Model] Creating GraphicPrimitive" << std::endl;
}


GraphicPrimitive::~GraphicPrimitive() {
    std::cout << "[GraphicPrimitive][Model] Destroying GraphicPrimitive" << std::endl;
    m_controllerPtr->notify(nullptr, "destroy graphic primitive");
}


/*!
 Отрисовывает документ.
 */
void GraphicPrimitiveView::render() const {
    std::cout << "[GraphicPrimitive][View] Rendering graphic primitive" << std::endl;
}


/*!
 Обновляет представление документа.
 */
void GraphicPrimitiveView::update(const std::string& message) {
    std::cout << "[GraphicPrimitive][View] Update view with " << message << std::endl;
    render();
}

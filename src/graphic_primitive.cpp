#include "graphic_primitive.h"


GraphicPrimitive::GraphicPrimitive() {
    std::cout << "[GraphicPrimitive][Model] Creating GraphicPrimitive" << std::endl;
}


GraphicPrimitive::~GraphicPrimitive() {
    std::cout << "[GraphicPrimitive][Model] Destroying GraphicPrimitive" << std::endl;
    m_controllerPtr->notify(nullptr, "destroy");
}

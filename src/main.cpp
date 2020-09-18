#include "document_controller.h"
#include "graphic_primitive_controller.h"
#include <iostream>

/*!
 Демонстрационная функция обработки документа.
 */
void handle_document() {
    DocumentControllerPtr controller = std::make_shared<DocumentController>();
    DocumentPtr document = controller->create();
    document->import("/home/user/import.doc");
    /* Какие-то действия с документом. */
    document->dump("/home/user/export.doc");
}


/*!
 Демонстрационная функция обработки графического интерфейса.
 */
void handle_graphic_primitive() {
    GraphicPrimitiveControllerPtr controller = std::make_shared<GraphicPrimitiveController>();
    GraphicPrimitivePtr graphicPrimitive = controller->create();
    /* Какие-то действия с графическим примитивом. */
    controller->destroy(graphicPrimitive);
}


int main() {
    handle_document();
    handle_graphic_primitive();
    
    return 0;
}

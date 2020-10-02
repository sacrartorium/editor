#include "controller.h"
#include <iostream>

/*!
 Демонстрационная функция обработки документа.
 */
void handle_document() {
    ControllerPtr controller = makeController();
    DocumentPtr document = controller->createDocument();
    document->import("/home/user/import.doc");
    /* Какие-то действия с документом. */
    document->dump("/home/user/export.doc");
}


/*!
 Демонстрационная функция обработки графического интерфейса.
 */
void handle_graphic_primitive() {
    ControllerPtr controller = makeController();
    GraphicPrimitivePtr graphicPrimitive = controller->createGraphicPrimitive();
    /* Какие-то действия с графическим примитивом. */
    controller->destroyGraphicPrimitive(graphicPrimitive);
}


int main() {
    handle_document();
    handle_graphic_primitive();
    
    return 0;
}

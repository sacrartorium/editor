#include "controller.h"
#include <iostream>

/*!
 Демонстрационная функция обработки документа.
 */
void handleDocument(ControllerPtr controller) {
    DocumentPtr document = controller->createDocument();
    DocumentViewPtr view = controller->createDocumentView();
    
    document->import("/home/user/import.doc");
    document->notify("#1 add new line");
    document->notify("#2 add new line");
    document->notify("#3 delete line");
    document->dump("/home/user/export.doc");
}


/*!
 Демонстрационная функция обработки графического интерфейса.
 */
void handleGraphicPrimitive(ControllerPtr controller) {
    GraphicPrimitivePtr graphicPrimitive = controller->createGraphicPrimitive();
    GraphicPrimitiveViewPtr view = controller->createGraphicPrimitiveView();
    
    graphicPrimitive->notify("#1 change color");
    graphicPrimitive->notify("#2 change width");
    
    controller->destroyGraphicPrimitive(graphicPrimitive);
}


int main() {
    ControllerPtr controller = makeController();
    handleDocument(controller);
    handleGraphicPrimitive(controller);
    
    return 0;
}

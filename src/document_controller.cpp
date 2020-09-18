#include "document_controller.h"


/*!
 Оповещение документом контроллера о своем действии.
 @param modelPtr Указатель на документ.
 @param event Событие.
 */
void DocumentController::notify(IModelPtr modelPtr, std::string event) const {
    UNUSED(modelPtr);
    
    if (event == "import") {
        std::cout << "[Document][Controller] Document is imported." << std::endl;
    } else if (event == "export") {
        std::cout << "[Document][Controller] Document is exported." << std::endl;
    } else if (event == "create") {
        std::cout << "[Document][Controller] Document is created." << std::endl;
    }
}


/*!
 Создание документа.
 */
DocumentPtr DocumentController::create() {
    m_documentPtr = std::make_shared<Document>();
    m_documentPtr->setController(shared_from_this());
    notify(m_documentPtr, "create");
    return m_documentPtr;
}

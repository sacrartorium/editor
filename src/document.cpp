#include "document.h"

/*!
 Конструирует документ.
 */
Document::Document() {
    std::cout << "[Document][Model] Creating document" << std::endl;
}

/*!
 Импортирует документ.
 @param importPath Абсолютный путь до документа.
 */
void Document::import(const std::string& importPath) {
    std::cout << "[Document][Model] Importing document from " << importPath << std::endl;
    
    m_controllerPtr->notify(shared_from_this(), "Import document");
    notify("#0 import document");
}


/*!
 Экспортирует документ.
 @param exportPath Абсолютный путь до документа.
 */
void Document::dump(const std::string& exportPath) {
    std::cout << "[Document][Model] Exporting document to " << exportPath << std::endl;
    
    m_controllerPtr->notify(shared_from_this(), "export document");
}


/*!
 Отрисовывает документ.
 */
void DocumentView::render() const {
    std::cout << "[Document][View] Rendering document" << std::endl;
}


/*!
 Обновляет представление документа.
 */
void DocumentView::update(const std::string& message) {
    std::cout << "[Document][View] Update view with " << message << std::endl;
    render();
}

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
    
    m_controllerPtr->notify(shared_from_this(), "import");
}


/*!
 Экспортирует документ.
 @param exportPath Абсолютный путь до документа.
 */
void Document::dump(const std::string& exportPath) {
    std::cout << "[Document][Model] Exporting document to " << exportPath << std::endl;
    
    m_controllerPtr->notify(shared_from_this(), "export");
}

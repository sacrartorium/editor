/*!
 @file
 @brief Заголовочный файл, содержащий объявление контроллера для документов.
 */

#pragma once

#include "base_interface.h"
#include "document.h"
#include <map>


class DocumentController;

///< Тип указателя на контроллер документа
using DocumentControllerPtr = std::shared_ptr<DocumentController>;


/*!
 @brief Контроллер документов.
 */
class DocumentController : public IController, public std::enable_shared_from_this<DocumentController> {
public:
    void notify(IModelPtr modelPtr, std::string event) const override;
    DocumentPtr create(); ///< Создание документа.
private:
    DocumentPtr m_documentPtr; ///< Указатель на документ.
};

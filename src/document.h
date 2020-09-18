/*!
 @file
 @brief Заголовочный файл, содержащий интерфейс модели документа.
 */

#pragma once

#include "base_interface.h"
#include <iostream>


class Document;

///< Тип указателя на модель документа
using DocumentPtr = std::shared_ptr<Document>;


/*!
 @brief Документ.
 */
class Document : public IModel, public std::enable_shared_from_this<Document> {
public:
    Document();
    void import(const std::string& importPath); ///< Импортирует документ.
    void dump  (const std::string& exportPath); ///< Экспортирует документ.
};

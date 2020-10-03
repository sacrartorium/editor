/*!
 @file
 @brief Заголовочный файл, содержащий интерфейс модели документа.
 */

#pragma once

#include "base_interface.h"
#include <iostream>


class Document;
class DocumentView;


using DocumentPtr     = std::shared_ptr<Document>;     ///< Тип указателя на модель документа.
using DocumentViewPtr = std::shared_ptr<DocumentView>; ///< Тип указателя на представление документа.


/*!
 @brief Документ.
 */
class Document : public IModel, public std::enable_shared_from_this<Document> {
public:
    Document();
    void import(const std::string& importPath); ///< Импортирует документ.
    void dump  (const std::string& exportPath); ///< Экспортирует документ.
};


class DocumentView : public IView, public std::enable_shared_from_this<DocumentView> {
public:
    void render() const override;
    void update(const std::string&) override;
};

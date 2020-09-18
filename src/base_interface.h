/*!
 @file
 @brief Заголовочный файл, содержащий интерфейсы контроллера и модели.
 */

#pragma once

#include <memory>

#define UNUSED(x) (void)(x)

class IModel;
class IController;

///< Тип указателя на интерфейс модели
using IModelPtr      = std::shared_ptr<IModel>;
///< Тип указателя на интерфейс контроллера
using IControllerPtr = std::shared_ptr<IController>;


/*!
 @brief Базовый интерфейс контроллера.
 */
class IController {
public:
    virtual ~IController() = default;
    virtual void notify(IModelPtr modelPtr, std::string event) const = 0; ///<  Метод, используемый моделью для
                                                                          ///< уведомления контроллера о различных событиях.
};


/*!
 @brief Базовый интерфейс модели.
 */
class IModel {
public:
    virtual ~IModel() = default;
    virtual void setController(IControllerPtr controllerPtr); ///< Устанавливает контроллер.
protected:
    IControllerPtr m_controllerPtr; ///< Хранит указатель на контроллер.
};


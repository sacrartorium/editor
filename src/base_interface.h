/*!
 @file
 @brief Заголовочный файл, содержащий интерфейсы контроллера и модели.
 */

#pragma once
#include "publisher.h"
#include <memory>

#define UNUSED(x) (void)(x)

class IModel;
class IView;
class IController;


using IModelPtr      = std::shared_ptr<IModel>;      ///< Тип указателя на интерфейс модели
using IViewPtr       = std::shared_ptr<IView>;       ///< Тип указателя на интерфейс контроллера
using IControllerPtr = std::shared_ptr<IController>; ///< Тип указателя на интерфейс контроллера


/*!
 @brief Базовый интерфейс контроллера.
 */
class IController {
public:
    virtual ~IController() = default;
    virtual void notify(IModelPtr modelPtr,
                        std::string event) const = 0; ///<  Метод, используемый моделью для
                                                      ///< уведомления контроллера о различных событиях.
};


/*!
 @brief Базовый интерфейс модели.
 */
class IModel : public Publisher {
public:
    virtual ~IModel() = default;
    virtual void setController(IControllerPtr controllerPtr); ///< Устанавливает контроллер.
protected:
    IControllerPtr m_controllerPtr; ///< Хранит указатель на контроллер.
};


/*!
 @brief Базовый интерфейс представления.
 */
class IView : public Subscriber {
public:
    virtual ~IView() = default;
    virtual void setModel(IModelPtr); ///< Сохраняет указатель на модель.
    virtual void render() const = 0;        ///< Отрисовывает представление модели.
private:
    IModelPtr m_modelPtr;
};


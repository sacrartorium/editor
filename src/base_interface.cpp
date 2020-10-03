#include "base_interface.h"

/*!
 Сохраняет указатель на IController в приватное поле IModel::m_controllerPtr
 @param controllerPtr Указатель на контроллер.
 */
void IModel::setController(IControllerPtr controllerPtr) {
    m_controllerPtr = controllerPtr;
}


/*!
 Сохраняет указатель на IModel в приватное поле IView::m_modelPtr
 @param modelPtr Указатель на модель.
 */
void IView::setModel(IModelPtr modelPtr) {
    m_modelPtr = modelPtr;
}

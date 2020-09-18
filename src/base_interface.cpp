#include "base_interface.h"

/*!
 Сохраняет указатель на IController в приватное поле IModel::m_controllerPtr
 @param controllerPtr Указатель на контроллер.
 */
void IModel::setController(IControllerPtr controllerPtr) {
    m_controllerPtr = controllerPtr;
}

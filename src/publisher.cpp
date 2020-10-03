#include "publisher.h"


/*!
 Добавляет подписчика.
 @param subscriber Указатель на подписчика.
 */
void Publisher::attach(SubscriberPtr subscriber) {
    m_subscribers.insert(subscriber);
}


/*!
 Передает сообщение подписчикам.
 @param message Сообщение для подписчиков.
 */
void Publisher::notify(const std::string& message) const {
    for (const SubscriberPtr& subscriber : m_subscribers) {
        subscriber->update(message);
    }
}

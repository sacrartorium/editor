#pragma once

/*!
 @file
 @brief Заголовочный файл, содержит объявление интерфейсов шаблона Publisher-Subscriber.
 */

#pragma once
#include "string"
#include <memory>
#include <set>


class Subscriber;
class Publisher;

using SubscriberPtr = std::shared_ptr<Subscriber>;  ///< Указатель на Subscriber'a.
using PublisherPtr  = std::shared_ptr<Publisher>;   ///< Указатель на Publisher'a.


/*!
 Интерфейс Subscriber'a.
 */
class Subscriber {
public:
    virtual ~Subscriber() = default;
    virtual void update(const std::string&) = 0; ///< Принимает сообщение от Publisher'a.
};


/*!
 Интерфейс Publisher'a.
 */
class Publisher {
public:
    void attach(SubscriberPtr subscriber);  ///< Добавляет Subscriber'a.
    void notify(const std::string&) const;  ///< Передает сообщение подписчикам.
private:
    std::set<SubscriberPtr> m_subscribers;
};

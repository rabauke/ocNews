/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c OcItemsIf -p ocitemsif.h:ocitemsif.cpp ../../ocNewsEngine/interfaces/de.buschmann23.ocNewsEngine.Items.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OCITEMSIF_H
#define OCITEMSIF_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface de.buschmann23.ocNewsEngine.Items
 */
class OcItemsIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "de.buschmann23.ocNewsEngine.Items"; }

public:
    OcItemsIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OcItemsIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> markAllItemsRead()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("markAllItemsRead"), argumentList);
    }

    inline QDBusPendingReply<> markItems(const QString &action, const QVariantList &ids)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action) << QVariant::fromValue(ids);
        return asyncCallWithArgumentList(QLatin1String("markItems"), argumentList);
    }

    inline QDBusPendingReply<> markItemsTillThis(const QString &action, const QDBusVariant &pubDate, const QDBusVariant &feedId)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action) << QVariant::fromValue(pubDate) << QVariant::fromValue(feedId);
        return asyncCallWithArgumentList(QLatin1String("markItemsTillThis"), argumentList);
    }

    inline QDBusPendingReply<> requestItems(const QString &batchSize, const QString &offset, const QString &type, const QString &id, const QString &getRead)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(batchSize) << QVariant::fromValue(offset) << QVariant::fromValue(type) << QVariant::fromValue(id) << QVariant::fromValue(getRead);
        return asyncCallWithArgumentList(QLatin1String("requestItems"), argumentList);
    }

    inline QDBusPendingReply<> starItems(const QString &action, const QVariantMap &itemIds)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action) << QVariant::fromValue(itemIds);
        return asyncCallWithArgumentList(QLatin1String("starItems"), argumentList);
    }

    inline QDBusPendingReply<> updateItems(const QString &lastModified, const QString &type, const QString &id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(lastModified) << QVariant::fromValue(type) << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QLatin1String("updateItems"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void markedAllItemsReadError(const QString &markedAllItemsReadErrorString);
    void markedAllItemsReadSuccess();
    void markedItemsError(const QString &markedItemsErrorString);
    void markedItemsSuccess(const QStringList &ids, const QString &action);
    void requestedItemsError(const QString &requestedItemsErrorString);
    void requestedItemsSuccess(const QList<int> &updated, const QList<int> &newItems, const QList<int> &deleted);
    void starredItemsError(const QString &starredItemsErrorString);
    void starredItemsSuccess(const QStringList &hashes, const QString &action);
    void updatedItemsError(const QString &updateItemsErrorString);
    void updatedItemsSuccess(const QList<int> &updated, const QList<int> &newItems, const QList<int> &deleted);
};

namespace de {
  namespace buschmann23 {
    namespace ocNewsEngine {
      typedef ::OcItemsIf Items;
    }
  }
}
#endif

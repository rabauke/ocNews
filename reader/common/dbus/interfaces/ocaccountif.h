/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c OcAccountIf -p ocaccountif.h:ocaccountif.cpp ../../ocNewsEngine/interfaces/de.buschmann23.ocNewsEngine.Account.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OCACCOUNTIF_H
#define OCACCOUNTIF_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface de.buschmann23.ocNewsEngine.Account
 */
class OcAccountIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "de.buschmann23.ocNewsEngine.Account"; }

public:
    OcAccountIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OcAccountIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> create()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("create"), argumentList);
    }

    inline QDBusPendingReply<> edit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("edit"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace de {
  namespace buschmann23 {
    namespace ocNewsEngine {
      typedef ::OcAccountIf Account;
    }
  }
}
#endif

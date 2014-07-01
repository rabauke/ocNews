/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c OcConfigIf -p occonfigif.h:occonfigif.cpp ../../ocNewsEngine/interfaces/de.buschmann23.ocNewsEngine.Configuration.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OCCONFIGIF_H
#define OCCONFIGIF_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface de.buschmann23.ocNewsEngine.Configuration
 */
class OcConfigIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "de.buschmann23.ocNewsEngine.Configuration"; }

public:
    OcConfigIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OcConfigIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> cleanCertificates()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("cleanCertificates"), argumentList);
    }

    inline QDBusPendingReply<> cleanDatabase()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("cleanDatabase"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("getConfig"), argumentList);
    }

    inline QDBusPendingReply<QDBusVariant> getSetting(const QString &entry, const QDBusVariant &defaultValue)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(entry) << QVariant::fromValue(defaultValue);
        return asyncCallWithArgumentList(QLatin1String("getSetting"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getStatistics()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("getStatistics"), argumentList);
    }

    inline QDBusPendingReply<bool> isAccountEnabled()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("isAccountEnabled"), argumentList);
    }

    inline QDBusPendingReply<bool> isConfigSet()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("isConfigSet"), argumentList);
    }

    inline QDBusPendingReply<> resetConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("resetConfig"), argumentList);
    }

    inline QDBusPendingReply<> setSetting(const QString &entry, const QDBusVariant &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(entry) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QLatin1String("setSetting"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void changedConfig();
    void cleanedCertificates();
    void cleanedDatabase();
    void gotConfig(const QVariantMap &config);
    void gotStatistics(const QVariantMap &stats);
};

namespace de {
  namespace buschmann23 {
    namespace ocNewsEngine {
      typedef ::OcConfigIf Configuration;
    }
  }
}
#endif

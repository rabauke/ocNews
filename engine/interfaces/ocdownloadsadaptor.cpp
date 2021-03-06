/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OcDownloadManagerAdaptor -a ocdownloadsadaptor.h:ocdownloadsadaptor.cpp de.buschmann23.ocNewsEngine.Downloads.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "ocdownloadsadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class OcDownloadManagerAdaptor
 */

OcDownloadManagerAdaptor::OcDownloadManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

OcDownloadManagerAdaptor::~OcDownloadManagerAdaptor()
{
    // destructor
}

bool OcDownloadManagerAdaptor::abortDownload(const QString &id)
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.abortDownload
    bool out0;
    QMetaObject::invokeMethod(parent(), "abortDownload", Q_RETURN_ARG(bool, out0), Q_ARG(QString, id));
    return out0;
}

void OcDownloadManagerAdaptor::append(const QString &id)
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.append
    QMetaObject::invokeMethod(parent(), "append", Q_ARG(QString, id));
}

bool OcDownloadManagerAdaptor::deleteFile(const QString &link, const QString &mime)
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.deleteFile
    bool out0;
    QMetaObject::invokeMethod(parent(), "deleteFile", Q_RETURN_ARG(bool, out0), Q_ARG(QString, link), Q_ARG(QString, mime));
    return out0;
}

QString OcDownloadManagerAdaptor::getCurrentItem()
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.getCurrentItem
    QString out0;
    QMetaObject::invokeMethod(parent(), "getCurrentItem", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString OcDownloadManagerAdaptor::itemExists(const QString &link, const QString &mime)
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.itemExists
    QString out0;
    QMetaObject::invokeMethod(parent(), "itemExists", Q_RETURN_ARG(QString, out0), Q_ARG(QString, link), Q_ARG(QString, mime));
    return out0;
}

bool OcDownloadManagerAdaptor::itemInQueue(const QString &id)
{
    // handle method call de.buschmann23.ocNewsEngine.Downloads.itemInQueue
    bool out0;
    QMetaObject::invokeMethod(parent(), "itemInQueue", Q_RETURN_ARG(bool, out0), Q_ARG(QString, id));
    return out0;
}


/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OcDBusAdaptor -a ocdbusadaptor.h:ocdbusadaptor.cpp de.buschmann23.ocNewsReader.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef OCDBUSADAPTOR_H
#define OCDBUSADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface de.buschmann23.ocNewsReader
 */
class OcDBusAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
#if defined(MEEGO_EDITION_HARMATTAN)
    Q_CLASSINFO("D-Bus Interface", "de.buschmann23.ocNewsReader")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"de.buschmann23.ocNewsReader\">\n"
"    <method name=\"showContent\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"itemId\"/>\n"
"    </method>\n"
"    <method name=\"addFeed\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"feedUrl\"/>\n"
"    </method>\n"
"    <method name=\"activate\" />"
"  </interface>\n"
        "")
#else
    Q_CLASSINFO("D-Bus Interface", "harbour.ocnews.reader")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"harbour.ocnews.reader\">\n"
"    <method name=\"showContent\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"itemId\"/>\n"
"    </method>\n"
"    <method name=\"addFeed\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"feedUrl\"/>\n"
"    </method>\n"
"    <method name=\"activate\" />"
"  </interface>\n"
        "")
#endif

public:
    OcDBusAdaptor(QObject *parent);
    virtual ~OcDBusAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void addFeed(const QStringList &feedUrl);
    void showContent(const QStringList &itemId);
    void activate();
Q_SIGNALS: // SIGNALS
};

#endif

/*
 * This file is part of buteo-syncfw package
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Sateesh Kavuri <sateesh.kavuri@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
*/
 
/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a SyncDBusAdaptor -c SyncDBusAdaptor com.meego.msyncd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef SYNCDBUSADAPTOR_H_1286524128
#define SYNCDBUSADAPTOR_H_1286524128

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.meego.msyncd
 */
class SyncDBusAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.meego.msyncd")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.meego.msyncd\">\n"
"    <signal name=\"syncStatus\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"aProfileName\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aStatus\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"aMessage\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aMoreDetails\"/>\n"
"    </signal>\n"
"    <signal name=\"transferProgress\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"aProfileName\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aTransferDatabase\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aTransferType\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"aMimeType\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aCommittedItems\"/>\n"
"    </signal>\n"
"    <signal name=\"signalProfileChanged\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"aProfileName\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"aChangeType\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"aProfileAsXml\"/>\n"
"    </signal>\n"
"    <signal name=\"backupInProgress\"/>\n"
"    <signal name=\"backupDone\"/>\n"
"    <signal name=\"restoreInProgress\"/>\n"
"    <signal name=\"restoreDone\"/>\n"
"    <signal name=\"resultsAvailable\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"aProfileName\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"aResultsAsXml\"/>\n"
"    </signal>\n"
"    <method name=\"startSync\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"    </method>\n"
"    <method name=\"abortSync\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"removeProfile\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"    </method>\n"
"    <method name=\"updateProfile\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileAsXml\"/>\n"
"    </method>\n"
"    <method name=\"requestStorages\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"aStorageNames\"/>\n"
"    </method>\n"
"    <method name=\"releaseStorages\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"aStorageNames\"/>\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"runningSyncs\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"getBackUpRestoreState\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"setSyncSchedule\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aScheduleAsXml\"/>\n"
"    </method>\n"
"    <method name=\"saveSyncResults\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aSyncResults\"/>\n"
"    </method>\n"
"    <method name=\"getLastSyncResult\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"    </method>\n"
"    <method name=\"allVisibleSyncProfiles\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"syncProfile\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aProfileId\"/>\n"
"    </method>\n"
"    <method name=\"syncProfilesByKey\">\n"
"      <arg direction=\"out\" type=\"as\" name=\"aProfileAsXml\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aKey\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"aValue\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:

    //! \see SyncDBusInterface::SyncDBusInterface()
    SyncDBusAdaptor(QObject *parent);
    
    //! \see ~SyncDBusInterface::SyncDBusInterface()
    virtual ~SyncDBusAdaptor();

public: // PROPERTIES

public Q_SLOTS: // METHODS
    //! \see SyncDBusInterface::abortSync()
    Q_NOREPLY void abortSync(const QString &aProfileId);
    
    //! \see SyncDBusInterface::allVisibleSyncProfiles()
    QStringList allVisibleSyncProfiles();
    
    //! \see SyncDBusInterface::getBackUpRestoreState()
    bool getBackUpRestoreState();
    
    //! \see SyncDBusInterface::getLastSyncResult()
    QString getLastSyncResult(const QString &aProfileId);
    
    //! \see SyncDBusInterface::releaseStorages()
    Q_NOREPLY void releaseStorages(const QStringList &aStorageNames);
    
    //! \see SyncDBusInterface::removeProfile()
    bool removeProfile(const QString &aProfileId);
    
    //! \see SyncDBusInterface::requestStorages()
    bool requestStorages(const QStringList &aStorageNames);
    
    //! \see SyncDBusInterface::runningSyncs()
    QStringList runningSyncs();
    
    //! \see SyncDBusInterface::saveSyncResults()
    bool saveSyncResults(const QString &aProfileId, const QString &aSyncResults);
    
    //! \see SyncDBusInterface::setSyncSchedule()
    bool setSyncSchedule(const QString &aProfileId, const QString &aScheduleAsXml);
    
    //! \see SyncDBusInterface::startSync()
    bool startSync(const QString &aProfileId);
    
    //! \see SyncDBusInterface::syncProfile()
    QString syncProfile(const QString &aProfileId);
    
    //! \see SyncDBusInterface::syncProfilesByKey()
    QStringList syncProfilesByKey(const QString &aKey, const QString &aValue);
    
    //! \see SyncDBusInterface::updateProfile()
    bool updateProfile(const QString &aProfileAsXml);

Q_SIGNALS: // SIGNALS

    //! \see SyncDBusInterface::backupDone()
    void backupDone();

    //! \see SyncDBusInterface::backupInProgress()
    void backupInProgress();
    
    //! \see SyncDBusInterface::restoreDone()
    void restoreDone();
    
    //! \see SyncDBusInterface::restoreInProgress()
    void restoreInProgress();
    
    //! \see SyncDBusInterface::resultsAvailable()
    void resultsAvailable(const QString &aProfileName, const QString &aResultsAsXml);
    
    //! \see SyncDBusInterface::signalProfileChanged()
    void signalProfileChanged(const QString &aProfileName, int aChangeType, const QString &aProfileAsXml);
    
    //! \see SyncDBusInterface::syncStatus()
    void syncStatus(const QString &aProfileName, int aStatus, const QString &aMessage, int aMoreDetails);
    
    //! \see SyncDBusInterface::transferProgress()
    void transferProgress(const QString &aProfileName, int aTransferDatabase, int aTransferType, const QString &aMimeType, int aCommittedItems);
};

#endif

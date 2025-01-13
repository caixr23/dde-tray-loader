/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-tray-loader/plugins/dde-dock/dbus/xml/org.deepin.dde.Appearance1.xml -a ./dde-tray-loader/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1Adaptor -i ./dde-tray-loader/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_APPEARANCE1ADAPTOR_H
#define ORG_DEEPIN_DDE_APPEARANCE1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-tray-loader/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Appearance1
 */
class Appearance1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Appearance1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Appearance1\">\n"
"    <method name=\"Delete\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"List\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"Set\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"Show\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"as\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"Thumbnail\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"GetScaleFactor\">\n"
"      <arg direction=\"out\" type=\"d\"/>\n"
"    </method>\n"
"    <method name=\"SetScaleFactor\">\n"
"      <arg direction=\"in\" type=\"d\"/>\n"
"    </method>\n"
"    <method name=\"GetScreenScaleFactors\">\n"
"      <arg direction=\"out\" type=\"a{sd}\" name=\"scaleFactors\"/>\n"
"      <annotation value=\"QMap&lt;QString,double&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"SetScreenScaleFactors\">\n"
"      <arg direction=\"in\" type=\"a{sd}\" name=\"scaleFactors\"/>\n"
"      <annotation value=\"QMap&lt;QString,double&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <signal name=\"Changed\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"Refreshed\">\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"GtkTheme\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"IconTheme\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"CursorTheme\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"Background\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"StandardFont\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"MonospaceFont\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"FontSize\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Opacity\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"WallpaperSlideShow\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"QtActiveColor\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"GlobalTheme\"/>\n"
"  </interface>\n"
        "")
public:
    Appearance1Adaptor(QObject *parent);
    virtual ~Appearance1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(QString Background READ background WRITE setBackground)
    QString background() const;
    void setBackground(const QString &value);

    Q_PROPERTY(QString CursorTheme READ cursorTheme WRITE setCursorTheme)
    QString cursorTheme() const;
    void setCursorTheme(const QString &value);

    Q_PROPERTY(double FontSize READ fontSize WRITE setFontSize)
    double fontSize() const;
    void setFontSize(double value);

    Q_PROPERTY(QString GlobalTheme READ globalTheme)
    QString globalTheme() const;

    Q_PROPERTY(QString GtkTheme READ gtkTheme WRITE setGtkTheme)
    QString gtkTheme() const;
    void setGtkTheme(const QString &value);

    Q_PROPERTY(QString IconTheme READ iconTheme WRITE setIconTheme)
    QString iconTheme() const;
    void setIconTheme(const QString &value);

    Q_PROPERTY(QString MonospaceFont READ monospaceFont WRITE setMonospaceFont)
    QString monospaceFont() const;
    void setMonospaceFont(const QString &value);

    Q_PROPERTY(double Opacity READ opacity WRITE setOpacity)
    double opacity() const;
    void setOpacity(double value);

    Q_PROPERTY(QString QtActiveColor READ qtActiveColor WRITE setQtActiveColor)
    QString qtActiveColor() const;
    void setQtActiveColor(const QString &value);

    Q_PROPERTY(QString StandardFont READ standardFont WRITE setStandardFont)
    QString standardFont() const;
    void setStandardFont(const QString &value);

    Q_PROPERTY(QString WallpaperSlideShow READ wallpaperSlideShow WRITE setWallpaperSlideShow)
    QString wallpaperSlideShow() const;
    void setWallpaperSlideShow(const QString &value);

public Q_SLOTS: // METHODS
    void Delete(const QString &in0, const QString &in1);
    double GetScaleFactor();
    QMap<QString,double> GetScreenScaleFactors();
    QString List(const QString &in0);
    void Set(const QString &in0, const QString &in1);
    void SetScaleFactor(double in0);
    void SetScreenScaleFactors(const QMap<QString,double> &scaleFactors);
    QString Show(const QString &in0, const QStringList &in1);
    QString Thumbnail(const QString &in0, const QString &in1);
Q_SIGNALS: // SIGNALS
    void Changed(const QString &in0, const QString &in1);
    void Refreshed(const QString &in0);
};

#endif

#ifndef HMI_PLUGIN_H
#define HMI_PLUGIN_H

#include <QQmlExtensionPlugin>

class HmiHWButtons : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes(const char *uri);
};

#endif // HMI_PLUGIN_H


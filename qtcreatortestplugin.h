#pragma once

#include "qtcreatortestplugin_global.h"

#include <extensionsystem/iplugin.h>

namespace QtcreatorTestplugin {
namespace Internal {

class QtcreatorTestpluginPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "QtcreatorTestplugin.json")

public:
    QtcreatorTestpluginPlugin();
    ~QtcreatorTestpluginPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace QtcreatorTestplugin


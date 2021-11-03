#pragma once

#include "qtcreatortestplugin_global.h"

#include <extensionsystem/iplugin.h>

namespace QtCreatorTestPlugin {
namespace Internal {

class QtCreatorTestPluginPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
        Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "QtCreatorTestPlugin.json")

        public:
                 QtCreatorTestPluginPlugin();
    ~QtCreatorTestPluginPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace QtCreatorTestPlugin


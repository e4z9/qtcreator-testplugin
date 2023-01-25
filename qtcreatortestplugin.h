#pragma once

#include "qtcreatortestplugin_global.h"

#include <extensionsystem/iplugin.h>

#if WITH_TESTS
#include <QtTest>
#endif

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

#if WITH_TESTS
private slots:
    void testFoo() { QVERIFY(false); };
#endif
};

} // namespace Internal
} // namespace QtCreatorTestPlugin

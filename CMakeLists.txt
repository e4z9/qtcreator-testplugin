cmake_minimum_required(VERSION 3.10)

# Remove when sharing with others.
list(APPEND CMAKE_PREFIX_PATH "/Users/Shared/qt/creator/6.0/build/6.2")

project(QtCreatorTestPlugin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)

find_package(QtCreator COMPONENTS Core REQUIRED)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
set(QtX Qt${QT_VERSION_MAJOR})

find_package(${QtX} COMPONENTS Test QUIET)
option(WITH_TESTS "Builds with tests" NO)
if (WITH_TESTS)
  enable_testing() # enable ctest for the auto tests

  set(IMPLICIT_DEPENDS Qt::Test)

  add_qtc_test(tst_mytest
    SOURCES tests/auto/tst_mytest.cpp
  )
endif()

add_qtc_plugin(QtCreatorTestPlugin
  PLUGIN_DEPENDS
    QtCreator::Core
  DEPENDS
    ${QtX}::Widgets
    QtCreator::ExtensionSystem
    QtCreator::Utils
  SOURCES
    .github/workflows/build_cmake.yml
    .github/workflows/README.md
    README.md
    qtcreatortestplugin.cpp
    qtcreatortestplugin.h
    qtcreatortestplugin_global.h
    qtcreatortestpluginconstants.h
)

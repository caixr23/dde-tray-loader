# SPDX-FileCopyrightText: 2024 UnionTech Software Technology Co., Ltd.
#
# SPDX-License-Identifier: CC0-1.0

set(PLUGIN_NAME "datetime")

project(${PLUGIN_NAME})

# Sources files
file(GLOB_RECURSE SRCS "*.h" "*.cpp"
        "../widgets/*.h"
        "../widgets/*.cpp"
        "../common/*.h"
        "../common/*.cpp"
        "../dbus/types/zoneinfo.h"
        "../dbus/types/zoneinfo.cpp"
)

find_package(PkgConfig REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} ${REQUIRED_QT_VERSION} REQUIRED COMPONENTS Widgets Svg DBus)
find_package(Dtk${DTK_VERSION_MAJOR} REQUIRED COMPONENTS Widget Tools)

dtk_add_dbus_interface(
    DBUS_INTERFACES
    ${CMAKE_CURRENT_SOURCE_DIR}/../dbus/xml/org.deepin.dde.Timedate1.xml
    timedate1interface
)

add_definitions("${QT_DEFINITIONS} -DQT_PLUGIN")
add_library(${PLUGIN_NAME} SHARED ${DBUS_INTERFACES} ${SRCS} resources/datetime.qrc)
set_target_properties(${PLUGIN_NAME} PROPERTIES LIBRARY_OUTPUT_DIRECTORY ../)
target_include_directories(${PLUGIN_NAME} PUBLIC
    ../dbus
    ../../../interfaces
    ../common
    ../widgets
    ../util
    calendar
)

target_link_libraries(${PLUGIN_NAME} PRIVATE
    Dtk${DTK_VERSION_MAJOR}::Widget
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Svg
    Qt${QT_VERSION_MAJOR}::DBus
)

install(TARGETS ${PLUGIN_NAME} LIBRARY DESTINATION lib/dde-dock/plugins)
install(FILES "resources/dcc-datetime.dci" DESTINATION share/dde-dock/icons/dcc-setting)

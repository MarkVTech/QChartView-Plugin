CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(qchartviewplugin)
TEMPLATE    = lib
QT += gui widgets charts

HEADERS     = QChartViewPlugin.h
SOURCES     = QChartViewPlugin.cpp
RESOURCES   =
#LIBS        += -L. -lqchartview

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

DISTFILES +=



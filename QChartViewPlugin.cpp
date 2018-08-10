/*
 * QChartViewPlugin - A library to provide a QChartView plugin for QtCreator/designer.
 *
 * Class Name: QChartViewPlugin
 *
 * File: QChartViewPlugin.cpp
 *
 * Copyright (C) 2018  Mark E. Wilson
 *
 * This is free and unencumbered software released into the public domain.
 *
 * Anyone is free to copy, modify, publish, use, compile, sell, or
 * distribute this software, either in source code form or as a compiled
 * binary, for any purpose, commercial or non-commercial, and by any
 * means.
 *
 * In jurisdictions that recognize copyright laws, the author or authors
 * of this software dedicate any and all copyright interest in the
 * software to the public domain. We make this dedication for the benefit
 * of the public at large and to the detriment of our heirs and
 * successors. We intend this dedication to be an overt act of
 * relinquishment in perpetuity of all present and future rights to this
 * software under copyright law.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * For more information, please refer to <http://unlicense.org/>
 *
 * Author(s):  Mark E. Wilson
 */

#include <QtCharts/QChartView>

#include "QChartViewPlugin.h"

#include <QtPlugin>

QChartViewPlugin::QChartViewPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QChartViewPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QChartViewPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QChartViewPlugin::createWidget(QWidget *parent)
{
    return new QtCharts::QChartView(parent);
}

QString QChartViewPlugin::name() const
{
    return QLatin1String("QChartView");
}

QString QChartViewPlugin::group() const
{
    return QLatin1String("");
}

QIcon QChartViewPlugin::icon() const
{
    return QIcon();
}

QString QChartViewPlugin::toolTip() const
{
    return QLatin1String("QChartView");
}

QString QChartViewPlugin::whatsThis() const
{
    return QLatin1String("QChartView");
}

bool QChartViewPlugin::isContainer() const
{
    return false;
}

QString QChartViewPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QChartView\" name=\"qChartView\">\n</widget>\n");
}

QString QChartViewPlugin::includeFile() const
{
    return QLatin1String("QtCharts/QChartView.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qchartviewplugin, QChartViewPlugin)
#endif // QT_VERSION < 0x050000

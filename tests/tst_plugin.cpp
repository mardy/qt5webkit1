/*
 * Copyright (C) 2013 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QDebug>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlEngine>
#include <QTest>


class PluginTest: public QObject
{
    Q_OBJECT

public:
    PluginTest();

private Q_SLOTS:
    void initTestCase();
    void testLoadPlugin();
};

PluginTest::PluginTest():
    QObject(0)
{
}

void PluginTest::initTestCase()
{
    qputenv("QML2_IMPORT_PATH", "../src/plugin");
}

void PluginTest::testLoadPlugin()
{
    QQmlEngine engine;
    QQmlComponent component(&engine);
    component.setData("import QtQuick 2.0\n"
                      "import QtWebKit1 0.1\n"
                      "WebView {}",
                      QUrl());
    QObject *object = component.create();
    QVERIFY(object != 0);

    QCOMPARE(object->metaObject()->className(), "QtWebKit1::QQuickWebView");

    delete object;
}

QTEST_MAIN(PluginTest);
#include "tst_plugin.moc"

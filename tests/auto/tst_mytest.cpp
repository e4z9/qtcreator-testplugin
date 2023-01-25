// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#include <QtTest/QtTest>

class tst_MyTest : public QObject
{
    Q_OBJECT

private slots:
    void mytest();
};

void tst_MyTest::mytest()
{
    QVERIFY(false);
}

QTEST_GUILESS_MAIN(tst_MyTest)

#include "tst_mytest.moc"

#pragma once

#include <QtWidgets/QWidget>
#include "ui_connect_test01.h"
#include "Student.h"
#include "Teacher.h"
#include <QLoggingCategory>

class connect_test01 : public QWidget
{
    Q_OBJECT

public:
    connect_test01(QWidget *parent = Q_NULLPTR);

private:
    Ui::connect_test01Class ui;
    Teacher* zt;
    Student* zs;

};

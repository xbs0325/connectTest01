#include "Student.h"

Student::Student(QObject *parent)
	: QObject(parent)
{

}

Student::~Student()
{
}

void Student::treat()
{
	/*QMessageBox* qb = new QMessageBox;
	qb->setText("学生请老师吃饭");
	qb->text();*/
	qDebug() << QString::fromLocal8Bit("学生请老师吃饭");
}
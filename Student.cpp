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
	qb->setText("ѧ������ʦ�Է�");
	qb->text();*/
	qDebug() << QString::fromLocal8Bit("ѧ������ʦ�Է�");
}
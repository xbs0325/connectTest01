#include "Teacher.h"

Teacher::Teacher(QObject *parent)
	: QObject(parent)
{
	void hungry();
}

Teacher::~Teacher()
{

}
void Teacher::classover()
{
	emit this->hungry();
}

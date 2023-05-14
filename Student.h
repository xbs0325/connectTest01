#pragma once
#include <QObject>
#include <QDebug>

class Student : public QObject
{
	Q_OBJECT

public:
	Student(QObject *parent);

	~Student();
signals:
	
public slots:
	void treat();
};

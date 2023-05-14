#include "connect_test01.h"

connect_test01::connect_test01(QWidget *parent)
    : QWidget(parent)
{
    zt = new Teacher(this);
    zs = new Student(this);
    ui.setupUi(this);

    void (Teacher:: * teacher_slot) (void) = &Teacher::hungry;
    void (Student:: * student_signal) (void) = &Student::treat;

    connect(zt, teacher_slot, zs, student_signal);
    //connect(ui.pushButton, &QPushButton::clicked, zt, &Teacher::classover);
    connect(ui.pushButton, &QPushButton::clicked, zs, student_signal);
    
}

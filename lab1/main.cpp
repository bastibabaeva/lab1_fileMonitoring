#include <QCoreApplication>
#include "manager.h"
#include <QTimer>
#include <QObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Manager manager;

    manager.AddFiles("C:\\lab1\\1.txt");
    manager.AddFiles("C:\\lab1\\2.txt");

    // Создание таймера для периодического вызова метода Monitoring()
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, &manager, &Manager::Monitoring);
    timer.start(100); // Запуск таймера с интервалом 100 миллисекунд

    return a.exec();
}

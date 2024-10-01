#include "consolelogger.h"
#include <QString>
#include <QDebug>

void ConsoleLogger::PrintFileExistenceChange(QString path, bool state, int size) //метод для печати изменения статуса файла
{
    if (state == true)
    {
        qDebug()<<"Файл: "<< path <<" существует, его размер: "<< size <<"\n";
    }
    else {
        qDebug()<<"Файл: "<< path <<" не существует.\n";
    }
}

void ConsoleLogger::PrintFileSizeChange(QString path, bool state, int size) //метод для печати изменения размера файла
{
    qDebug()<<"Файл: "<< path <<" был изменен, его новый размер: "<< size <<"\n";
}

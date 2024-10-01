#ifndef MANAGER_H
#define MANAGER_H
#include <QObject>
#include <QVector>
#include "file.h"
#include "consolelogger.h"

class Manager:public QObject //класс Manager, наследуемый от QОbject для реализации наблюдения за файлами
{
    Q_OBJECT//макрос обеспечивающий сигнально-слотную связь

public:
     Manager() {} //приватный конструктор по умолчанию

    void Monitoring(); //метод, реализующий слежение за характеристиками файла (его размер и существование)
    void AddFiles(QString path);//метод для добавления файлов приватный вектор

private:
    QVector<File> files; //Вектор files для хранения информации о файлах
    ConsoleLogger *logger; // Объявляем logger как член класса

signals:
    void FileSizeHasChanged(QString path, int size); //генерируется, когда происходит изменение размера в файле
    void FileCreated(QString path, int size); //генерируется, когда происходит изменение существования файла
    void FileDeleted(QString path); //генерируется, когда происходит изменение существования файла
};
#endif // MANAGER_H

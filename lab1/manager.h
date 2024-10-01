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
    Manager();
    ~Manager();

    void Monitoring(); //метод, реализующий слежение за характеристиками файла (его размер и существование)
    void AddFiles(QString path);//метод для добавления файлов (так как вектор files приватный) для слежения за ними в основной программе
private:

    QVector<File> files; //Вектор files для хранения информации о файлах
    ConsoleLogger *logger; // Объявляем logger как член класса
signals:
    void sizeOfFileChanged(QString path, bool state, int size); //генерируется, когда происходит изменение размера в файле
    void existOfFileChanged(QString path, bool state, int size); //генерируется, когда происходит изменение о существовании в файле

};
#endif // MANAGER_H

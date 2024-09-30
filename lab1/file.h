#ifndef FILE_H
#define FILE_H
#include <QString>
#include <QFileInfo>

class File: public QFileInfo //класс File, наследуемый от класса QFileInfo, для получения информации о файле
{
    QString path; //путь к файлу
    int size; //размер
    bool status; //статус - существование файла

public:
    File(const QString& filePath); //конструктор
    void Update(); //обновление данных о файле
    bool isExist(); //проверка на существование файла
    bool isEmpty(); //проверка на пустоту файла
    bool isChangedStatus(); //проверка на изменение существования файла
    bool isChangedSize(); //проверка на изменение размера файла
};

#endif // FILE_H

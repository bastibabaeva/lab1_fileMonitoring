#ifndef FILE_H
#define FILE_H
#include <QFileInfo>

class File: public QFileInfo //класс File, наследуемый от класса QFileInfo, для получения информации о файле
{
    QString fileName; //имя файла
    int size; //размер
    bool status; //статус - существование файла

public:
    File(const QString& name = "NoFile"); //конструктор с параметром по умолчанию

    bool isExist(); //проверка на существование файла
    bool isEmpty(); //проверка на пустоту файла
    bool isChanged(); //проверка на изменение файла
};

#endif // FILE_H

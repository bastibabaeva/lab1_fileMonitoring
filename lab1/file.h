#ifndef FILE_H
#define FILE_H
#include <QString>
#include <QFileInfo>

class File: public QFileInfo //класс File, наследуемый от класса QFileInfo, для получения информации о файле
{
    friend class Manager;
private:
    QString path; //путь к файлу
    int size; //размер файла
    bool status; //статус - существование файла
public:
    File(const QString& filePath); //конструктор с параметром
    void Update(); //обновление данных о файле

    bool isChangedStatus(); //проверка на изменение существования файла
    bool isChangedSize(); //проверка на изменение размера файла
};

#endif // FILE_H

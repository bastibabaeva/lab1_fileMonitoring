#include "file.h"

File::File(const QString& name):fileName(name) //определение конструктора
{
    QFileInfo fileInfo(name);//создание файла типа QFileInfo, в который передается его имя или значение по умолчанию
    size = fileInfo.size(); //вызов метода size() для нахождения размера файла
    status = fileInfo.exists(); //вызов метода size() для определения факта существования файла
}
bool File::isExist() //проверка на существование файла
{
    QFileInfo file(fileName);
    return file.exists(); //если true, файл существует
}

bool File::isEmpty() //проверка на пустоту файла
{
    QFileInfo file(fileName);
    if ((file.exists() == true) && (file.size() == 0)) return true; //если файл существует и его размер = 0, то true
    else return false;
}

bool File::isChangedAll() //проверка на изменение размера и существования файла
{
    QFileInfo file(fileName);
    if (file.exists() != status || file.size() != size) return true;
    else return false;
}

bool File::isChangedStatus() //проверка на изменение существования файла
{
    QFileInfo file(fileName);
    if (file.exists() != status) return true;
    else return false;
}

bool File::isChangedSize() //проверка на изменение размера файла
{
    QFileInfo file(fileName);
    if (file.size() != size) return true;
    else return false;
}

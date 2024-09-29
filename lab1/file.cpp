#include "file.h"

File::File(const QString& name):fileName(name) //определение конструктора
{
    QFileInfo fileInfo(name);//создание файла типа QFileInfo, в который передается его имя или значение по умолчанию
    size = fileInfo.size(); //вызов метода size() для нахождения размера файла
    status = fileInfo.exists(); //вызов метода size() для определения факта существования файла
}

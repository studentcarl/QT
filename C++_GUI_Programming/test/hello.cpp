#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    //管理程序资源
    QApplication a(argc, argv);
    //QT label小控件
    QLabel *label = new QLabel("hello qt");
    //显示label
    label->show();
    //让程序进入消息循环。等待可能的操作，进行响应。
    return a.exec();
}

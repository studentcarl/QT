#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    //创建一个 QApplication 对象
    QApplication app(argc, argv);
    //QLabel 对象，QLabel 是一个 Qt 提供的小控件，显示一行文本
    QLabel *label = new QLabel("Hello Qt!");
    //显示 QLabel。
    label->show();
    //：QApplication.exec()，让程序进入消息循环。
    return app.exec();
}

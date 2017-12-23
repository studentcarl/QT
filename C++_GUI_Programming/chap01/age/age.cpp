#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //创建一个窗口
    QWidget *window = new QWidget;
    //设置title
    window->setWindowTitle("Enter Your Age");
    //创建一个SpinBox
    QSpinBox *spinBox = new QSpinBox;
    //创建一个QSlider 设置滚轮方向为水平
    QSlider *slider = new QSlider(Qt::Horizontal);
    //设置SpinBox范围
    spinBox->setRange(0, 130);
    //设置QSlider范围
    slider->setRange(0, 130);

    QObject::connect(spinBox, SIGNAL(valueChanged(int)),slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),spinBox, SLOT(setValue(int)));
    spinBox->setValue(35);
    /*
    QHBoxLayout：水平排列控件。
    QVBoxLayout：垂直排列控件。
    QGridLayout：按矩阵方式排列控件
    */
    //设置QHBoxLayout布局
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window->setLayout(layout);
    window->show();

    return app.exec();
}

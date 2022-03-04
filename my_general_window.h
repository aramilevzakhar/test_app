#ifndef MY_GENERAL_WINDOW_H
#define MY_GENERAL_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class my_general_window; }
QT_END_NAMESPACE

class my_general_window : public QMainWindow
{
    Q_OBJECT

public:
    my_general_window(QWidget *parent = nullptr);
    ~my_general_window();

private:
    Ui::my_general_window *ui;
};
#endif // MY_GENERAL_WINDOW_H

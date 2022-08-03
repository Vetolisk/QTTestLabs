#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <disk.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItemAnimation>
#include <QStack>
#include <QTimeLine>
#include <QValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    int a=1;
    int PosLastDishY;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void SetStopDebug();
    void PaintRect(int x, int y, int l, int w);
    void AnimationDown();
    void AnimationRight();
    void setAnimation();
    void Move(QStack<QGraphicsItem *>& one, QStack<QGraphicsItem *>& two);
    void Hanoi(int n, QStack<QGraphicsItem *> &one, QStack<QGraphicsItem *> &two, QStack<QGraphicsItem *> &tree);
    void DeleteMyItem();
    void on_lineEdit_returnPressed();
    void on_pushButton_clicked();
    void onAnimationFinished();
private:

    Ui::MainWindow *ui;
    bool flagButton =false;
    //Флаг для проверки ввода условия. *Теперь не вылетает*
    bool flag=true;
    QTimeLine *timer ;
    QGraphicsItemAnimation *animation ;
    QGraphicsScene *scene;
    Disk *disk;
    int num=0,lastPosY;
    QStack<QGraphicsItem*> one;
    QStack<QGraphicsItem*> two;
    QStack<QGraphicsItem*> three;


};
#endif // MAINWINDOW_H

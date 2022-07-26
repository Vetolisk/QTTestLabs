#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <disk.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItemAnimation>
#include <QStack>
#include <QTimeLine>
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
    void PaintRect(int x, int y, int l, int w);
    void AnimationRight();
    void setAnimation();
    void Move(QStack<QGraphicsItem *>& one, QStack<QGraphicsItem *>& two);
    void Hanoi(int n, QStack<QGraphicsItem *> &one, QStack<QGraphicsItem *> &two, QStack<QGraphicsItem *> &tree);
    void DeleteMyItem();
    void on_lineEdit_returnPressed();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    bool flagButton =false;
    QTimeLine *timer;
    QGraphicsScene *scene;
    QGraphicsItemAnimation *animation;
    Disk *disk;
    int num=0,lastPosY;
    QStack<QGraphicsItem*> one;
    QStack<QGraphicsItem*> two;
    QStack<QGraphicsItem*> three;


};
#endif // MAINWINDOW_H

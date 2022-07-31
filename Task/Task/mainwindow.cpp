#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsTextItem>
#include<QFont>
#include<QGraphicsItem>
#include <QDebug>
#include <QStack>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene =new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    animation = new QGraphicsItemAnimation;
    ui->label_2->setText("1");
    PaintRect(0,0,7,8);
    // номера под столбиками
    int x=0;
    for (int var = 1; var < 4; ++var) {
        QGraphicsTextItem *text=new QGraphicsTextItem();
        text = scene->addText(QString::number(var));
        text->setPos(x,30);
        x=x+200;

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetStopDebug()
{
    qDebug()<<"Stop";
}
//Установка значений дисков
void MainWindow::PaintRect(int x,int y, int l, int w)
{
    DeleteMyItem();
    for (int var = 0; var < a; ++var) {
        QBrush brash=QBrush(QColor(qrand()%255,qrand()%255,qrand()%255));
        disk=new Disk(x,y,l,w,brash);
        scene->addItem(disk);
        disk->setPos(x,y);
        one.push(disk);
        y-=4;
        l-=5;
        x+=1.75;
    }
    lastPosY=one.last()->pos().y();
    qDebug()<<lastPosY;
}

void MainWindow::AnimationDown()
{



}
//Анимация диска вправо
void MainWindow::AnimationRight()
{
animation->setTimeLine(timer);
for (int i = 0; i < 200; ++i){
    animation->setPosAt(i/200.0, QPointF(i, -200));
}
timer->start();

connect(timer,SIGNAL(finished()),this,SLOT(onAnimationFinished()));


}

/*анимация прямоугольника анимация вверх
 * Я выяснил при работе с анимацией
 * таймер устанавливает значения для продолжительности анимации.
 * далее берется объект для анимации и передвигается по координатам.
 * не получается переместить обьект поочередно по координатам.
*/

void MainWindow::setAnimation()
{

    timer = new QTimeLine(1000);
    timer->setFrameRange(0, 100);
    if(!one.isEmpty()){
    animation->setItem(one.last());
    }
     animation->setTimeLine(timer);
     for (int i = 0; i < 200; ++i){
         animation->setPosAt(i/200.0, QPointF(0, -i));

     }


    timer->start();
    flagButton=false;

    connect(timer,SIGNAL(finished()),this,SLOT(onAnimationFinished()));

    }

//Действие в ханойской башне
void MainWindow::Move(QStack<QGraphicsItem*> &one,QStack<QGraphicsItem*> &two)
{

    num ++; // Счетчик

    if(!one.isEmpty()){
    two.push(one.top());


    one.pop();

    }


}
void MainWindow::Hanoi(int n,QStack<QGraphicsItem*>& one,QStack<QGraphicsItem*> &two, QStack<QGraphicsItem*> &tree)
{
    if(n==1)
    {
        Move(one,tree);

    }
    else
    {

         Hanoi (n-1, one, tree, two); // Сначала переместите первые n-1 дисков из начального столбца A во вспомогательный столбец B
         Move (one, tree); // Перемещаем n-й диск из начального бара A в целевой бар C
         Hanoi (n-1, two, one, tree); // Наконец, переместите диски n-1 из вспомогательного столбца B в целевой столбец C
    }

}


// функция удаления прямоугольников(дисков)
void MainWindow::DeleteMyItem(){

        while(!one.isEmpty()){
        scene->removeItem(one.pop());
        }
}

//функция создания прямоугольников(дисков)
void MainWindow::on_lineEdit_returnPressed()
{

    DeleteMyItem();

   //прорисовать самый большой а двигать самый последний
    QString text=ui->lineEdit->text();
    MainWindow::a= text.toInt();
    int l=15*a/2,x=0,y=-4,w=8;
    if(a<=20&&a>0){
        flag=true;
         ui->label_2->setText(text);
      PaintRect(x,y,l,w);
    }else{
        flag=false;
         ui->label_2->setText("Error");
    }
}

void MainWindow::on_pushButton_clicked()
{
    // условие нажатие кнопки
    //Флаг для проверки ввода условия.
    if(flag){
   if(!flagButton){
       ui->pushButton->setText("Стоп");
       ui->lineEdit->setReadOnly(true);
       setAnimation();
       Hanoi(a,one,two,three);
       QString text;
       text.setNum(num);
       ui->label_4->setText(text);
       num=0;
       flagButton=true;
   }else{
         ui->pushButton->setText("Старт");
         ui->lineEdit->setReadOnly(false);
         flagButton=false;
}
    }

}

void MainWindow::onAnimationFinished()
{
    ui->pushButton->setText("Старт");
    ui->lineEdit->setReadOnly(false);
    sender()->deleteLater();
}

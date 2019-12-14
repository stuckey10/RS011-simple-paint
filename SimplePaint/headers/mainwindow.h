#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QComboBox>
#include <QLabel>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QFormLayout>
#include <QDialog>
#include <QLineEdit>
#include <QList>
#include <QDialogButtonBox>
#include <QButtonGroup>
#include <QRadioButton>
#include <QResizeEvent>
#include <QTextStream>
#include <QColorDialog>
#include <QImage>
#include <QSize>

#include <QPixmap>
#include "qpainter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionClose_triggered();

    void on_actionOpen_triggered();

    void on_actionColor_Pallete_triggered();


private:
    Ui::MainWindow *ui;
    QColor color = Qt::black;

protected:
    //void paintEvent(QPaintEvent* e);
    //void mousePressEvent(QMouseEvent *event);
    //void mouseReleaseEvent(QMouseEvent *event);
};
#endif // MAINWINDOW_H

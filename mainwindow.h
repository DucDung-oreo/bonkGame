#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTime>
#include <QMessageBox>
#include <QCursor>
#include <QPixmap>
#include <QLabel>
#include <QFile>
#include <QSound>
#include <QtMultimedia/QMediaPlayer>
#include <QUrl>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_butStart_clicked();

    void on_butStop_clicked();

    void on_txtTime_editingFinished();

    void on_butClear_clicked();

    void on_butCheems_clicked();

    void on_butStart_2_clicked();

    void on_txtTime_2_editingFinished();

    void on_butStop_2_clicked();

    void on_butCheems_2_clicked();

    void on_butCheems_3_clicked();

    void on_butCheems_7_clicked();

    void on_butCheems_8_clicked();

    void on_butClear_2_clicked();

private:
    Ui::MainWindow *ui;
    bool game = false;
    bool game_2 = false;
    int count_horny = 0;
    int count_bonk = 0;
    int count_horny_2 = 0;
    int count_bonk_2 = 0;
    int msec;
    int msec_2;
    float result;
    QLabel *labCheems;
    int idxCheems;
    QMediaPlayer *player = new QMediaPlayer(this, QMediaPlayer::StreamPlayback);

};
void delay(int msec);

#endif // MAINWINDOW_H

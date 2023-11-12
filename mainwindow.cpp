#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labOuch->hide();
    ui->labOuch_2->hide();
    ui->txtCheems->hide();
    ui->txtCheems_2->hide();
    ui->txtCheems_3->hide();
    ui->txtCheems_4->hide();
    ui->txtCheems_5->hide();


}

MainWindow::~MainWindow()
{
    ui->pushButton->setGeometry(100, 100, 50, 50);

    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk ++;
    ui->txtBonk->setText(QString::number(count_bonk));
    int x = ui->pushButton->pos().x();
    int y = ui->pushButton->pos().y();
    ui->labOuch->move(x + 100, y - 100);
    ui->labOuch->show();
    delay(msec);
    ui->labOuch->hide();
    ui->pushButton->autoRepeat();
}

void MainWindow::on_butStart_clicked()
{
    game = true;
    player->setMedia(QUrl::fromLocalFile("/home/ducdung/bonkGame/bonk_sound.mp3"));
    player->setVolume(400);
    while (game == true){
        ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-128.png")));
        delay(msec);
        ui->pushButton->move(rand() % 900, rand() % 800);
        count_horny ++;
        ui->txtHorny->setText(QString::number(count_horny));
    }
}
void delay(int msec)
{
    QTime dieTime= QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::on_butStop_clicked()
{
    game = false;
    result = float(count_bonk)/count_horny * 100;
    QMessageBox msgBox;
    QString b;
    b.setNum(result, 'g', 4);
    msgBox.setStyleSheet("QLabel{min-width: 1000px;}");
    msgBox.setText("<font size = 20>Congratulations!");
    QString status = QString("<font size = 20>You have a rate of " + b + "% in protecting Cheems from the Horniness!");
    msgBox.setInformativeText(status);
    msgBox.exec();
}

void MainWindow::on_txtTime_editingFinished()
{
    msec = ui->txtTime->text().toInt();

}



void MainWindow::on_butClear_clicked()
{
    count_horny = 0;
    count_bonk = 0;
    ui->txtHorny->setText(QString::number(count_horny));
    ui->txtBonk->setText(QString::number(count_bonk));
}

void MainWindow::on_butCheems_clicked()
{
//    QSound::play("/home/ducdung/bonkGame/Bonk - Sound Effect (HD).mp3");


    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk_2 ++;
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
    int x = ui->txtCheems->pos().x();
    int y = ui->txtCheems->pos().y();
    ui->labOuch_2->move(x + 100, y - 100);
    ui->labOuch_2->show();
    player->play();
    delay(100);
    ui->txtCheems->hide();
    delay(300);
    ui->labOuch_2->hide();
}

void MainWindow::on_butStart_2_clicked()
{
    game_2 = true;
    player->setMedia(QUrl::fromLocalFile("/home/ducdung/bonkGame/bonk_sound.mp3"));
    player->setVolume(400);
    while (game_2 == true){
        ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-128.png")));
//        ui->tabWidget->cursor()
        ui->butCheems->setDisabled(true);
        ui->butCheems_2->setDisabled(true);
        ui->butCheems_3->setDisabled(true);
        ui->butCheems_7->setDisabled(true);
        ui->butCheems_8->setDisabled(true);

        idxCheems = rand() % 5;
//        switch (idxCheems) {
//        case 0:
//            *labCheems = ui->txtCheems;
//            break;
//        case 1:
//            *labCheems = ui->txtCheems_2;
//            break;
//        case 2:
//            *labCheems = ui->txtCheems_3;
//            break;
//        case 3:
//            *labCheems = ui->txtCheems_4;
//            break;
//        case 4:
//            *labCheems = ui->txtCheems_5;
//            break;
//        default:
//            break;
//        }
        switch (idxCheems) {
        case 0:
        {
            ui->butCheems->setEnabled(true);
            delay(msec_2);
            ui->txtCheems->show();
            delay(msec_2 + 100);
            ui->txtCheems->hide();
            break;
        }
        case 1:
        {
            ui->butCheems_2->setEnabled(true);
            delay(msec_2);
            ui->txtCheems_2->show();
            delay(msec_2 + 100);
            ui->txtCheems_2->hide();
            break;
        }
        case 2:
        {
            ui->butCheems_3->setEnabled(true);
            delay(msec_2);
            ui->txtCheems_3->show();
            delay(msec_2 + 100);
            ui->txtCheems_3->hide();
            break;
        }
        case 3:
        {
            ui->butCheems_7->setEnabled(true);
            delay(msec_2);
            ui->txtCheems_5->show();
            delay(msec_2 + 100);
            ui->txtCheems_5->hide();
            break;
        }
        case 4:
        {
            ui->butCheems_8->setEnabled(true);
            delay(msec_2);
            ui->txtCheems_4->show();
            delay(msec_2 + 100);
            ui->txtCheems_4->hide();
            break;
        }
        default:
            break;
        }

        count_horny_2 ++;
        ui->txtHorny_2->setText(QString::number(count_horny_2));
    }
}

void MainWindow::on_txtTime_2_editingFinished()
{
    msec_2 = ui->txtTime_2->text().toInt();
}

void MainWindow::on_butStop_2_clicked()
{
    game_2 = false;
    result = float(count_bonk_2)/count_horny_2 * 100;
    QMessageBox msgBox;
    QString b;
    b.setNum(result, 'g', 4);
    msgBox.setStyleSheet("QLabel{min-width: 1000px;}");
    msgBox.setText("<font size = 20>Congratulations!");
    QString status = QString("<font size = 20>You have a rate of " + b + "% in protecting Cheems from the Horniness!");
    msgBox.setInformativeText(status);
    msgBox.exec();
}

void MainWindow::on_butCheems_2_clicked()
{
//    QSound::play("/home/ducdung/bonkGame/Bonk - Sound Effect (HD).mp3");
    player->play();

    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk_2 ++;
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
    int x = ui->txtCheems_2->pos().x();
    int y = ui->txtCheems_2->pos().y();
    ui->labOuch_2->move(x + 100, y - 100);
    ui->labOuch_2->show();
    delay(100);
    ui->txtCheems_2->hide();
    delay(300);
    ui->labOuch_2->hide();
}

void MainWindow::on_butCheems_3_clicked()
{
//    QSound::play("/home/ducdung/bonkGame/Bonk - Sound Effect (HD).mp3");
    player->play();

    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk_2 ++;
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
    int x = ui->txtCheems_3->pos().x();
    int y = ui->txtCheems_3->pos().y();
    ui->labOuch_2->move(x + 100, y - 100);
    ui->labOuch_2->show();
    delay(100);
    ui->txtCheems_3->hide();
    delay(300);
    ui->labOuch_2->hide();
}

void MainWindow::on_butCheems_7_clicked()
{
//    QSound::play("/home/ducdung/bonkGame/Bonk - Sound Effect (HD).mp3");
    player->play();

    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk_2 ++;
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
    int x = ui->txtCheems_5->pos().x();
    int y = ui->txtCheems_5->pos().y();
    ui->labOuch_2->move(x + 100, y - 100);
    ui->labOuch_2->show();
    delay(100);
    ui->txtCheems_5->hide();
    delay(300);
    ui->labOuch_2->hide();
}

void MainWindow::on_butCheems_8_clicked()
{
//    QSound::play("/home/ducdung/bonkGame/Bonk - Sound Effect (HD).mp3");
    player->play();

    ui->tabWidget->setCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-rotated.png")));
    count_bonk_2 ++;
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
    int x = ui->txtCheems_4->pos().x();
    int y = ui->txtCheems_4->pos().y();
    ui->labOuch_2->move(x + 100, y - 100);
    ui->labOuch_2->show();
    delay(100);
    ui->txtCheems_4->hide();
    delay(300);
    ui->labOuch_2->hide();
}

void MainWindow::on_butClear_2_clicked()
{
    count_horny_2 = 0;
    count_bonk_2 = 0;
    ui->txtHorny_2->setText(QString::number(count_horny_2));
    ui->txtBonk_2->setText(QString::number(count_bonk_2));
}

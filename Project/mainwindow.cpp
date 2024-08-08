// mainwindow.cpp

#include "databasehelper.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Ваш массив с названиями тестов
    //QStringList testNames = {"Психологическая устойчивость", "Волевой самоконтроль", "Нормативность", "Организованность", "Ответственность","Навыки работы в коллективе"};

    // Создаем объект класса Test
    //test = new Test(this);
    // Заполнение QListWidget элементами из массива
    MainWindow::setWindowTitle("ArmTests");
    ui->listWidget->addItems(testNames);
    ui->textBrowser->setStyleSheet("background-color: transparent;");

}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    // Определение тек выбранного элемента
    QString selectedTest = item->text();

    // Очистка второго списка перед добавлением новых элементов
    ui->listWidget->clear();

    // Здесь вы можете добавить логику для заполнения второго списка
    // в зависимости от выбранного элемента из первого списка
    if(selectedTest == "Психологическая устойчивость")
    {
        QStringList normativeTests = {"Назад","ИТО+", "Прогноз","СР-45"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Волевой самоконтроль")
    {
        QStringList normativeTests = {"Назад","Способность самоуправления(ССУ)"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Нормативность")
    {
        QStringList normativeTests = {"Назад","Оценка потребности в одобрении Марлоу-Крауна"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Организованность")
    {
        QStringList normativeTests = {"Назад","Уровень выраженности инфантилизма(УВИ)"};
        ui->listWidget->addItems(normativeTests);
    }

    if(selectedTest == "Навыки защиты от манипуляции")
    {
        QStringList normativeTests = {"Назад","Диагностика стратегии психологической защиты"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Навыки работы в коллективе")
    {
        QStringList normativeTests = {"Назад","Стиль управления"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Навыки управления коллективом")
    {
        QStringList normativeTests = {"Назад","Менеджер и коммуникация", "Менеджер и человеческие отношения"};
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "Назад")
    {
        QStringList normativeTests = testNames;
        ui->listWidget->addItems(normativeTests);
    }
    if(selectedTest == "ИТО+")
    {
        openTest = "ИТО+";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "СР-45")
    {
        openTest = "СР-45";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Прогноз")
    {
        openTest = "Прогноз";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Уровень выраженности инфантилизма(УВИ)")
    {
        openTest = "Уровень выраженности инфантилизма(УВИ)";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    };
    if(selectedTest == "Оценка потребности в одобрении Марлоу-Крауна")
    {
        openTest = "Оценка потребности в одобрении Марлоу-Крауна";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Менеджер и коммуникация")
    {
        openTest = "Менеджер и коммуникация";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Менеджер и человеческие отношения")
    {
        openTest = "Менеджер и человеческие отношения";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Диагностика стратегии психологической защиты")
    {
        openTest = "Диагностика стратегии психологической защиты";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Стиль управления")
    {
        openTest = "Стиль управления";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();
        SecondWindow->show();
    }
    if(selectedTest == "Способность самоуправления(ССУ)")
    {
        openTest = "Способность самоуправления(ССУ)";
        secondwindow *SecondWindow = new secondwindow(this);
        connect(SecondWindow, &secondwindow::closed, this, &MainWindow::show);
        ui->listWidget->addItems(testNames);
        // Спрячем первую форму
        this->hide();

        SecondWindow->show();

    }

    // Добавьте другие варианты для остальных элементов первого списка

}





MainWindow::~MainWindow()
{
    delete ui;
}

#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <algorithm> // Для использования std::count
#include <QDialog>
#include<QString>
#include <vector>
#include <QVBoxLayout>
#include <QLayout>

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT


signals:
    void closed();

protected:
    void closeEvent(QCloseEvent *event) override;

public:
    QFont font;
    QVector<QPointer<QPushButton>> dynamicButtons;
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();
    void test_about(const QString& testName);
    void WhatTest(const QString& testName);
    void elementComparisons(const std::vector<int>& indices_to_compare);
    void elementComparisons_1(const std::vector<int>& indices_to_compare);
    void elementComparisons_2(const std::vector<int>& indices_to_compare_1,const std::vector<int>& indices_to_compare_2);

private slots:
    void countMatchingAnswers(const QString& testName); // Слот для подсчета совпадений

private:
    Ui::secondwindow *ui;
    QString testName;
    int yourVariable; // Объявление переменной yourVariable(номер у выбранной кнопки)
    void updateTextBrowser(); // Объявление функции updateTextBrowser
    QVector<int> buttonNumbers; // Массив для хранения номеров кнопок
    QVBoxLayout *layout; // добавляем указатель на QVBoxLayout
};

#endif // SECONDWINDOW_H

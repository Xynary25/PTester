#include "databasehelper.h"
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <qtextbrowser.h>
#include <QPushButton>
#include <QPointer>
#include <QCloseEvent>
#include <QVBoxLayout>
#include <QLayout>




secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{

    ui->setupUi(this);
    secondwindow::setWindowTitle(openTest);

    font = ui->textBrowser->font();
    font.setPointSize(12); // Устанавливаем размер шрифта 16 (можете изменить по вашему выбору)
    ui->textBrowser->setFont(font);

    testName = openTest;
    test_about(testName);
    //WhatTest(testName);
}
//--Способность самоуправления(ССУ)
void secondwindow::test_about(const QString& testName)
{
    if(testName == "ИТО+")
    {

        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Тест ИТО+</h1>"
        "<p>" + test_ITO_inf + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName); delete button; });

    }
    if(testName == "СР-45")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Диагностика СР-45</h1>"
        "<p>" + test_SSR_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Прогноз")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Анкета оценки НПУ: Прогноз</h1>"
        "<p>" + test_PROGNOZ_1_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Уровень выраженности инфантилизма, УВИ</h1>"
        "<p>" + test_SSU_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, выберите тот вариант ответа, с которым вы согласны</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Оценка потребности в одобрении Марлоу-Крауна")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Оценка потребности в одобрении Марлоу-Крауна</h1>"
        "<p>" + test_MarKrau_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });


    }
    if(testName == "Менеджер и коммуникация")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Менеджер и коммуникация</h1>"
        "<p>" + test_MIK_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Менеджер и человеческие отношения")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Менеджер и человеческие отношения</h1>"
        "<p>" + test_MIChO_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Диагностика стратегии психологической защиты")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Диагностика стратегии психологической защиты</h1>"
        "<p>" + test_DSPZ_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, выберите одно из трех утверждений, с которым вы согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Стиль управления")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Стиль руководства</h1>"
        "<p>" + test_StileManage_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, выберите одно из трех утверждений, с которым вы согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
    if(testName == "Способность самоуправления(ССУ)")
    {
        // Используем HTML разметку для отображения оформленного текста
        QString htmlText = "<h1 style=\"text-align: center;\">Способность к самоуправлению, ССУ</h1>"
        "<p>" + test_SSU_info + "</p>"
        "<p><strong>Инструкция:</strong> Прочитав каждое утверждение, зачеркните \"Да\" перед номером соответствующего утверждения, если согласны с ним, или \"Нет\", если не согласны.</p>";

        ui->textBrowser->setHtml(htmlText);



        QPushButton* button = new QPushButton(this);
        button->setText("Начать");
        button->show();
        button->setGeometry(ui->textBrowser->pos().x(),ui->textBrowser->height()+30,50,20);
        connect(button, &QPushButton::clicked, this, [=]() { WhatTest(testName);delete button; });

    }
}

void secondwindow::WhatTest(const QString& testName)
{
    font.setPointSize(30); // Устанавливаем размер шрифта 16 (можете изменить по вашему выбору)
    ui->textBrowser->setFont(font);

    if (testName == "ИТО+")
    {
        ui->textBrowser->setText("1. " + test_ITO_vpr[buttonNumbers.size()]);

        for (int i = 1; i < 3; ++i)
        {
            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);

            //button->setGeometry(100, 100 + i * 50, 200, 50);
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);
            if (i == 1) { button->setText("Да"); }
            if (i == 2) { button->setText("Нет"); }
            button->show();

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        buttonNumbers.append(i);
                        updateTextBrowser();
                    });

           /* // Соединение для удаления кнопки при уничтожении(работает правильно, выполняет требуемое)
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
*/
           /* // Удаляем динамически созданный объект после его использования(часть кода не выполняла должного, оставлю здесь для обдумывания ошибок)
            connect(button, &QObject::destroyed, this, [&]()
            {
                if (button)
                    delete button;
            });*/

        }

    }
    if(testName == "СР-45") // Проверяем значение переменной testName
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_SSR[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 3; ++i)
        {
            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);

            //button->setGeometry(100, 100 + i * 50, 200, 50);
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);
            if (i == 1) { button->setText("Да"); }
            if (i == 2) { button->setText("Нет"); }
            button->show();

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        buttonNumbers.append(i);
                        updateTextBrowser();
                    });

            // Удаляем динамически созданный объект после его использования
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }

    }
    if(testName == "Прогноз") // Проверяем значение переменной testName
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_PROGNOZ_1_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 3; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);

            if(i==1){button->setText("Да");}
            if(i==2){button->setText("Нет");}

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }

    }
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_UVI_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 5; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-100+i*120,ui->textBrowser->height()-40,120,40);


            if(i==1){button->setText("Да");}
            if(i==2){button->setText("Скорее да, чем нет");}
            if(i==3){button->setText("Скорее нет, чем да");}
            if(i==4){button->setText("Нет");}
            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }
    }
    if(testName == "Оценка потребности в одобрении Марлоу-Крауна")
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_MarKrau_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 0; i < 2; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            //button->setGeometry(ui->textBrowser->pos().x()-100+i*120,ui->textBrowser->height()-40,120,40);
            button->setGeometry(ui->textBrowser->pos().x()+50+i*150,ui->textBrowser->height()-80,150,50);

            if(i==1){button->setText("Да");}
            if(i==0){button->setText("Нет");}

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }
    }
    if(testName == "Менеджер и коммуникация")
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_MIK_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 3; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);


            if(i==1){button->setText("Да");}
            if(i==2){button->setText("Нет");}

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }
    }
    if(testName == "Менеджер и человеческие отношения")
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_MIChO_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 3; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);


            if(i==1){button->setText("Да");}
            if(i==2){button->setText("Нет");}

            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }
    }
    if(testName == "Диагностика стратегии психологической защиты") // Проверяем значение переменной testName
    {
        font.setPointSize(18); // Устанавливаем размер шрифта 16 (можете изменить по вашему выбору)
        ui->textBrowser->setFont(font);

        ui->textBrowser->setText("1. " +test_DSPZ_vpr[buttonNumbers.size()] + "\n" +
                                 +"1)"+  test_DSPZ_otv_Peaceful[buttonNumbers.size()] + "\n" +
                                 +"2)"+  test_DSPZ_otv_Avoidant[buttonNumbers.size()] + "\n" +
                                 +"3)"+  test_DSPZ_otv_Aggressive[buttonNumbers.size()]);

        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 4; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-100+i*120,ui->textBrowser->height()-40,120,40);


            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }

    }
    if(testName == "Стиль управления") // Проверяем значение переменной testName
    {
        font.setPointSize(18); // Устанавливаем размер шрифта 16 (можете изменить по вашему выбору)
        ui->textBrowser->setFont(font);
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_StileManage_vpr[buttonNumbers.size()] + "\n" +
                                 +"1)"+  test_StileManage_otv_Avto[buttonNumbers.size()] + "\n" +
                                 +"2)"+  test_StileManage_otv_Demo[buttonNumbers.size()] + "\n" +
                                 +"3)"+  test_StileManage_otv_Libe[buttonNumbers.size()]);

        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 4; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-100+i*120,ui->textBrowser->height()-40,120,40);


            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }

    }
    if(testName == "Способность самоуправления(ССУ)") // Проверяем значение переменной testName
    {
        //устанавливаем текст, который находится в элементе массива test_ITO_vpr по индексу buttonNumbers.size()
        ui->textBrowser->setText("1. " +test_SSU_vpr[buttonNumbers.size()]);
        // Цикл для обхода всех элементов в test_ITO_vpr
        for (int i = 1; i < 3; ++i) // Используем тип данных std::vector<QString>::size_type
        {
            //int buttonNumber = i; // Номер кнопки

            QPointer<QPushButton> button = new QPushButton(QString::number(i), this);

            dynamicButtons.append(button);
            //button->setGeometry(100, 100 + i * 50, 200, 50); // Устанавливаем позицию и размер кнопки
            button->setGeometry(ui->textBrowser->pos().x()-50+i*150,ui->textBrowser->height()-80,150,50);

            if(i==1){button->setText("Да");}
            if(i==2){button->setText("Нет");}
            connect(button, &QPushButton::clicked, this, [this, i]()
                    {
                        // Обработчик события клика по кнопке
                        // Здесь можно выполнить любые действия с номером кнопки, например, записать его в массив

                        buttonNumbers.append(i); // Записываем номер кнопки в массив
                        updateTextBrowser(); // Вызываем функцию для обновления содержимого QTextBrowser
                    });

            button->show(); // Показываем кнопку
            // Соединение для удаления кнопки при уничтожении
            connect(button, &QPushButton::destroyed, this, [this, button]() {
                dynamicButtons.removeAll(button); // Удаляем из контейнера при уничтожении
            });
        }

    }
}

//проверка одного качества (процент от одного показателя общей характеристики(для каждого показателя вызывать отдельно))
void secondwindow::elementComparisons(const std::vector<int>& indices_to_compare)
{
    int matchingCount = 0; // Переменная для подсчета совпадений
    int totalCount = 0; // Переменная для общего количества элементов

    if(testName == "ИТО+")
    {
    for (int index : indices_to_compare) {
        if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_ITO_bad_otv.size()) {
            totalCount++; // Увеличиваем общее количество элементов

            if (buttonNumbers[index] == test_ITO_bad_otv[index]) {
                matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            } else {
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
            }
        } else {
            //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
        }
    }

    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");

    }
    if(testName == "СР-45")
    {
    for (int index : indices_to_compare) {
        if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_SSR_bad_otv.size()) {
            totalCount++; // Увеличиваем общее количество элементов

            if (buttonNumbers[index] == test_SSR_bad_otv[index]) {
                matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            } else {
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
            }
        } else {
            //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
        }
    }

    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");
    }
    if(testName == "Прогноз")
    {
    for (int index : indices_to_compare) {
        if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_PROGNOZ_1_bad_otv.size()) {
            totalCount++; // Увеличиваем общее количество элементов

            if (buttonNumbers[index] == test_PROGNOZ_1_bad_otv[index]) {
                matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            } else {
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
            }
        } else {
            //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
        }
    }

    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");
    }
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {

        for (int index : indices_to_compare) {
            if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_UVI_otv_A.size()) {
                totalCount++; // Увеличиваем общее количество элементов

                if (buttonNumbers[index] == 1) {
                    matchingCount+=test_UVI_otv_A[index];
                    // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                }
                if (buttonNumbers[index] == 2) {
                    matchingCount+=test_UVI_otv_B[index];
                    // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                }
                if (buttonNumbers[index] == 3) {
                    matchingCount+=test_UVI_otv_V[index];
                    // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                }
                if (buttonNumbers[index] == 4) {
                    matchingCount+=test_UVI_otv_G[index];
                    // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                }
            } else {
                //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
            }
        }


    // Вычисляем процент совпадений
        double matchingPercentage = (static_cast<double>(matchingCount) / (totalCount*3)) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");
    }
    if(testName == "Оценка потребности в одобрении Марлоу-Крауна")
    {
    for (int index : indices_to_compare) {
            if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_MarKrau_bad_otv.size()) {
                totalCount++; // Увеличиваем общее количество элементов

                if (buttonNumbers[index] == test_MarKrau_bad_otv[index]) {
                    matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                } else {
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
                }
            } else {
                //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
            }
    }
    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");

    }
    if(testName == "Способность самоуправления(ССУ)")
    {
    for (int index : indices_to_compare) {
        if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_SSU_otv.size()) {
            totalCount++; // Увеличиваем общее количество элементов

            if (buttonNumbers[index] == test_SSU_otv[index]) {
                matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            } else {
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
            }
        } else {
            //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
        }
    }

    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");
    }
    if(testName == "Менеджер и коммуникация")
    {
    for (int index : indices_to_compare) {
            if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_MIK_bad_otv.size()) {
                totalCount++; // Увеличиваем общее количество элементов

                if (buttonNumbers[index] == test_MIK_bad_otv[index]) {
                    matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                } else {
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
                }
            } else {
                //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
            }
    }
    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");

    }
    if(testName == "Менеджер и человеческие отношения")
    {
    for (int index : indices_to_compare) {
            if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_MIChO_bad_otv.size()) {
                totalCount++; // Увеличиваем общее количество элементов

                if (buttonNumbers[index] == test_MIChO_bad_otv[index]) {
                    matchingCount++; // Увеличиваем число совпадений, если элементы совпадают
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
                } else {
                    //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " не совпадают.");
                }
            } else {
                //ui->textBrowser->append("Индекс " + QString::number(index) + " выходит за пределы векторов.");
            }
    }
    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / totalCount) * 100;
    ui->textBrowser->append(QString::number(matchingPercentage) + "%");

    }


}
void secondwindow::elementComparisons_1(const std::vector<int>& indices_to_compare)
{
    int matchingCount = 0; // Переменная для подсчета совпадений
    int totalCount = 0; // Переменная для общего количества элементов
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {
    for (int index : indices_to_compare) {
        if (index >= 0 && index < buttonNumbers.size() && static_cast<std::vector<int>::size_type>(index) < test_UVI_otv_A.size()) {
            totalCount++; // Увеличиваем общее количество элементов

            if (buttonNumbers[index] == 1) {
                matchingCount+=test_UVI_otv_A[index];
                // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            }
            if (buttonNumbers[index] == 2) {
                matchingCount+=test_UVI_otv_B[index];
                // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            }
            if (buttonNumbers[index] == 3) {
                matchingCount+=test_UVI_otv_V[index];
                // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            }
            if (buttonNumbers[index] == 4) {
                matchingCount+=test_UVI_otv_G[index];
                // Увеличиваем число совпадений, если элементы совпадают
                //ui->textBrowser->append("Элементы на индексе " + QString::number(index) + " совпадают: " + QString::number(buttonNumbers[index]));
            }
        }
    }
    // Вычисляем процент совпадений
    double matchingPercentage = (static_cast<double>(matchingCount) / 100) * 100;
    ui->textBrowser->append("Оценка : " + QString::number(matchingPercentage) + " баллов из 100");
    if(matchingPercentage<=30){ui->textBrowser->append("Личность: не инфантильная");}
    if(matchingPercentage>30&&matchingPercentage<=60){ui->textBrowser->append("Личность: слабо инфантильная");}
    if(matchingPercentage>60&&matchingPercentage<=90){ui->textBrowser->append("Личность: средне инфантильная");}
    if(matchingPercentage>90){ui->textBrowser->append("Личность: высоко инфантильная");}
    //--------
    //При оценке общей инфантильности, автором предлагаются следующие нормы:
    //· От 0 до 30 баллов - не инфантильная личность
    //· от 31 до 60 баллов - слабо инфантильная личность
    //· от 61 до 90 баллов - средне инфантильная личность
    //· от 91 и выше - высоко инфантильная личность.
    //--------

    }
}

//следующий вопрос
void secondwindow::updateTextBrowser()
{
    if (!ui->textBrowser){return;}
    if(testName == "ИТО+"){
    // Проверяем, закончился ли тест
    if (buttonNumbers.size() >= static_cast<int>(test_ITO_vpr.size()))
    {
        // Скрываем кнопки с вариантами ответов
        for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
        {
            if (QPushButton* button = qobject_cast<QPushButton*>(obj))
            {
                button->hide();
                //button->deleteLater();
            }
        }
        countMatchingAnswers(testName);
    }
    // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_ITO_vpr.size())
    {
        // Отображаем следующий элемент из test_ITO_vpr в textBrowser
        QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_ITO_vpr[buttonNumbers.size()];
        ui->textBrowser->setText(questionWithNumber);
    }
    }
    if(testName == "СР-45"){
    // Проверяем, закончился ли тест
    if (buttonNumbers.size() >= static_cast<int>(test_SSR.size()))
    {
        // Скрываем кнопки с вариантами ответов
        for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
        {
            if (QPushButton* button = qobject_cast<QPushButton*>(obj))
            {
                button->hide();
            }
        }
        countMatchingAnswers(testName);
    }
    // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_SSR.size())
    {
        // Отображаем следующий элемент из test_ITO_vpr в textBrowser
        QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_SSR[buttonNumbers.size()];
        ui->textBrowser->setText(questionWithNumber);
    }
    }
    if(testName == "Прогноз"){
        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_PROGNOZ_1_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_PROGNOZ_1_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_PROGNOZ_1_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber);
        }
    }
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {
        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_UVI_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_UVI_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_UVI_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber);
        }
    }
    if(testName == "Оценка потребности в одобрении Марлоу-Крауна")
    {
        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_MarKrau_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_MarKrau_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_MarKrau_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber);
        }
    }
    if(testName == "Менеджер и коммуникация")
    {

        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_MIK_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_MIK_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_MIK_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber);
        }
    }
    if(testName == "Менеджер и человеческие отношения")
    {

        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_MIChO_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_MIChO_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_MIChO_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber);
        }
    }
    if(testName == "Диагностика стратегии психологической защиты"){
        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_DSPZ_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_DSPZ_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_DSPZ_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber + "\n" +
                    +"1)"+  test_DSPZ_otv_Peaceful[buttonNumbers.size()] + "\n" +
                    +"2)"+  test_DSPZ_otv_Avoidant[buttonNumbers.size()] + "\n" +
                    +"3)"+  test_DSPZ_otv_Aggressive[buttonNumbers.size()]);
        }
    }
    if(testName == "Стиль управления"){
        // Проверяем, закончился ли тест
        if (buttonNumbers.size() >= static_cast<int>(test_StileManage_vpr.size()))
        {
            // Скрываем кнопки с вариантами ответов
            for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
            {
                if (QPushButton* button = qobject_cast<QPushButton*>(obj))
                {
                    button->hide();
                }
            }
            countMatchingAnswers(testName);
        }
        // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
        if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_StileManage_vpr.size())
        {
            // Отображаем следующий элемент из test_ITO_vpr в textBrowser
            QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_StileManage_vpr[buttonNumbers.size()];
            ui->textBrowser->setText(questionWithNumber + "\n" +
                                     +"1)"+  test_StileManage_otv_Avto[buttonNumbers.size()] + "\n" +
                                     +"2)"+  test_StileManage_otv_Demo[buttonNumbers.size()] + "\n" +
                                     +"3)"+  test_StileManage_otv_Libe[buttonNumbers.size()]);
        }
    }
    if(testName == "Способность самоуправления(ССУ)"){
    // Проверяем, закончился ли тест
    if (buttonNumbers.size() >= static_cast<int>(test_SSU_vpr.size()))
    {
        // Скрываем кнопки с вариантами ответов
        for (QObject* obj : this->children()) // Используем this для доступа к дочерним объектам окна
        {
            if (QPushButton* button = qobject_cast<QPushButton*>(obj))
            {
                button->hide();
            }
        }
        countMatchingAnswers(testName);
    }
    // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
    // Проверяем, есть ли еще элементы в test_ITO_vpr для отображения
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) < test_SSU_vpr.size())
    {
        // Отображаем следующий элемент из test_ITO_vpr в textBrowser
        QString questionWithNumber = QString::number(buttonNumbers.size() + 1) + ". " + test_SSU_vpr[buttonNumbers.size()];
        ui->textBrowser->setText(questionWithNumber);
    }
    }

}
// результат теста
void secondwindow::countMatchingAnswers(const QString& testName)
{
    font.setPointSize(12); // Устанавливаем размер шрифта 16 (можете изменить по вашему выбору)
    ui->textBrowser->setFont(font);
    ui->textBrowser->clear();
    int matchingCount = 0; // Переменная для хранения количества совпадений
    if(testName == "ИТО+") // Проверяем значение переменной testName
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_ITO_bad_otv.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_ITO_vpr.size()))
        {
            ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }

    // Перебираем элементы массивов по индексу
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_ITO_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    //ui->textBrowser->append("Количество совпадений с правильными ответами: " + QString::number(matchingCount));


    // Индексы элементов для сравнения
    ui->textBrowser->append("Ложь: ");
    elementComparisons(test_ITO_bad_otv_Lie);
    ui->textBrowser->append("Аггравация: " );
    elementComparisons(test_ITO_bad_otv_Aggravity);
    ui->textBrowser->append("Экстраверсия: " );
    elementComparisons(test_ITO_bad_otv_Extraversion);
    ui->textBrowser->append("Спонтанность: " );
    elementComparisons(test_ITO_bad_otv_Spontaneity);
    ui->textBrowser->append("Агрессивность: " );
    elementComparisons(test_ITO_bad_otv_Aggressiveness);
    ui->textBrowser->append("Ригидность: " );
    elementComparisons(test_ITO_bad_otv_Rigidity);
    ui->textBrowser->append("Интроверсия: " );
    elementComparisons(test_ITO_bad_otv_Introversion);
    ui->textBrowser->append("Сензитивность: " );
    elementComparisons(test_ITO_bad_otv_Sensitivity);
    ui->textBrowser->append("Тревожность: " );
    elementComparisons(test_ITO_bad_otv_Anxiety);
    ui->textBrowser->append("Лабильность: " );
    elementComparisons(test_ITO_bad_otv_Lability);
    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "СР-45") // Проверяем значение переменной testName
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_SSR_bad_otv.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_SSR.size()))
        {
            ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }

    // Перебираем элементы массивов по индексу
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_SSR_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    //ui->textBrowser->append("Количество совпадений с правильными ответами: " + QString::number(matchingCount));


    // Индексы элементов для сравнения
    ui->textBrowser->append("Ложь: ");
    elementComparisons(test_SSR_bad_otv_Lie);
    ui->textBrowser->append("Склонность к суицидальным реакциям: " );
    elementComparisons(test_SSR_bad_otv_Sr);

    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "Прогноз") // Проверяем значение переменной testName
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_PROGNOZ_1_bad_otv.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_PROGNOZ_1_vpr.size()))
        {
            //ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        //ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }

    // Перебираем элементы массивов по индексу
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_PROGNOZ_1_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    //ui->textBrowser->append("Количество совпадений с правильными ответами: " + QString::number(matchingCount));


    // Индексы элементов для сравнения
    ui->textBrowser->append("Ложь: ");
    elementComparisons(test_PROGNOZ_1_bad_otv_Lie);
    ui->textBrowser->append("Устойчивость: " );
    elementComparisons(test_PROGNOZ_1_bad_otv_Stability);

    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "Уровень выраженности инфантилизма(УВИ)")
    {
    ui->textBrowser->append("Общий результат: ");
    elementComparisons_1(test_UVI_otv_All);
    ui->textBrowser->append("Эмоционально-волевая сфера: ");
    elementComparisons(test_UVI_otv_EmotSphere);
    ui->textBrowser->append("Трудовая мотивация: ");
    elementComparisons(test_UVI_otv_WorkMotiv);
    ui->textBrowser->append("Ценностные ориентации: ");
    elementComparisons(test_UVI_otv_ValOrient);
    ui->textBrowser->append("Развлечения, гедонизм: ");
    elementComparisons(test_UVI_otv_Hedonism);
    ui->textBrowser->append("Рефлексия: ");
    elementComparisons(test_UVI_otv_Reflection);
    ui->textBrowser->append("Позиция иждивенчества, зависимость, безответственность: ");
    elementComparisons(test_UVI_otv_Irresponsibility);
    ui->textBrowser->append("Неупорядоченность, хаотичность поведения: ");
    elementComparisons(test_UVI_otv_Disordered);
    ui->textBrowser->append("Преодолевающее поведение: ");
    elementComparisons(test_UVI_otv_Overcoming);
    }
    if(testName == "Оценка потребности в одобрении Марлоу-Крауна")
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_MarKrau_bad_otv.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_MarKrau_vpr.size()))
        {
            //ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        //ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }

    // Перебираем элементы массивов по индексу для подсчета совпадений с ответами
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_MarKrau_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    ui->textBrowser->append("Количество баллов: " + QString::number(matchingCount)+" из 20");
    if(matchingCount<=6)
    {
        ui->textBrowser->append("Низкая мотивация к одобрению.");
    }
    if(7<=matchingCount&& matchingCount<=13)
    {
        ui->textBrowser->append("Средняя мотивация к одобрению.");
    }
    if(14<=matchingCount&& matchingCount<=20)
    {
        ui->textBrowser->append("Высокая мотивация к одобрению.");
    }
    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "Менеджер и коммуникация")
    {    // Перебираем элементы массивов по индексу для подсчета совпадений с ответами
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_MIK_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }
    if(matchingCount<60)
    {
        ui->textBrowser->append("Плохой результат");
    }
    if(matchingCount>=60&&matchingCount<80)
    {
        ui->textBrowser->append("Удовлетворительно");
    }
    if(matchingCount>=80)
    {
        ui->textBrowser->append("Отличный результат");
    }

    // Выводим результат в QTextBrowser
    ui->textBrowser->append("Правильность ответов: " + QString::number(matchingCount)+"%");

    }
    if(testName == "Менеджер и человеческие отношения")
    {    // Перебираем элементы массивов по индексу для подсчета совпадений с ответами
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_MIChO_bad_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }
    if(matchingCount<60)
    {
        ui->textBrowser->append("Плохой результат");
    }
    if(matchingCount>=60&&matchingCount<80)
    {
        ui->textBrowser->append("Удовлетворительно");
    }
    if(matchingCount>=80)
    {
        ui->textBrowser->append("Отличный результат");
    }
    // Выводим результат в QTextBrowser
    ui->textBrowser->append("Правильность ответов: " + QString::number(matchingCount)+"%");
    }
    if(testName == "Диагностика стратегии психологической защиты")
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_DSPZ_otv_Peaceful.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_DSPZ_vpr.size()))
        {
            //ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        //ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }
    float a=0; float b=0;float c =0;
    // Перебираем элементы массивов по индексу для подсчета совпадений с ответами
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == 1)
        {
            a++; // Увеличиваем счетчик совпадений
        }
        if (buttonNumbers[i] == 2)
        {
            b++; // Увеличиваем счетчик совпадений
        }
        if (buttonNumbers[i] == 3)
        {
            c++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    ui->textBrowser->append("Миролюбивый: " + QString::number(a/buttonNumbers.size()*100)+"%");
    ui->textBrowser->append("Избегающий:  " + QString::number(b/buttonNumbers.size()*100)+"%");
    ui->textBrowser->append("Агрессивный: " + QString::number(c/buttonNumbers.size()*100)+"%");
    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "Стиль управления")
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_StileManage_vpr.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_StileManage_vpr.size()))
        {
            //ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        //ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }
    float a=0; float b=0;float c =0;
    // Перебираем элементы массивов по индексу для подсчета совпадений с ответами
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == 1)
        {
            a++; // Увеличиваем счетчик совпадений
        }
        if (buttonNumbers[i] == 2)
        {
            b++; // Увеличиваем счетчик совпадений
        }
        if (buttonNumbers[i] == 3)
        {
            c++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    ui->textBrowser->append("Ваш стиль управления коллективом:");
    ui->textBrowser->append("Авторитарный: " + QString::number(a/buttonNumbers.size()*100)+"%");
    ui->textBrowser->append("Демократический:  " + QString::number(b/buttonNumbers.size()*100)+"%");
    ui->textBrowser->append("Попустительский: " + QString::number(c/buttonNumbers.size()*100)+"%");
    // Перебираем каждый индекс и сравниваем значения элементов

    }
    if(testName == "Способность самоуправления(ССУ)") // Проверяем значение переменной testName
    {
    // Проверяем, что массивы имеют одинаковую длину
    if (static_cast<std::vector<QString>::size_type>(buttonNumbers.size()) != test_SSU_otv.size())
    {
        if (static_cast<int>(buttonNumbers.size()) < static_cast<int>(test_SSU_vpr.size()))
        {
            //ui->textBrowser->append("Ошибка: количество выбранных ответов меньше количества вопросов.");
            return; // Выйти из функции, если количество ответов меньше количества вопросов
        }

        //ui->textBrowser->append("Ошибка: количество выбранных ответов не совпадает с количеством правильных ответов.");
        return; // Выйти из функции, если массивы разной длины
    }

    // Перебираем элементы массивов по индексу
    for (int i = 0; i < buttonNumbers.size(); ++i)
    {
        // Сравниваем элементы массивов по соответствующему индексу
        if (buttonNumbers[i] == test_SSU_otv[i])
        {
            matchingCount++; // Увеличиваем счетчик совпадений
        }
    }

    // Выводим результат в QTextBrowser
    //ui->textBrowser->append("Количество совпадений с правильными ответами: " + QString::number(matchingCount));


    // Индексы элементов для сравнения

    ui->textBrowser->append("Противоречия: ");
    elementComparisons(test_SSU_otv_Contradictions);
    ui->textBrowser->append("Прогнозирование: " );
    elementComparisons(test_SSU_otv_Forecasting);
    ui->textBrowser->append("Целеполагание: " );
    elementComparisons(test_SSU_otv_Goal_setting);
    ui->textBrowser->append("Планирование: " );
    elementComparisons(test_SSU_otv_Planning);
    ui->textBrowser->append("Критерий оценки качества: " );
    elementComparisons(test_SSU_otv_QuaAs);
    ui->textBrowser->append("Принятие решения: " );
    elementComparisons(test_SSU_otv_MakDecis);
    ui->textBrowser->append("Самоконтроль: " );
    elementComparisons(test_SSU_otv_Self_control);
    ui->textBrowser->append("Коррекция: " );
    elementComparisons(test_SSU_otv_Correction);

    // Перебираем каждый индекс и сравниваем значения элементов

    }

}
//закрытие окна с тестом
void secondwindow::closeEvent(QCloseEvent *event)
{
    //результата не дает
    /*for (QPointer<QPushButton> button : dynamicButtons) {
            delete button;
        }*/

    emit closed();
    event->accept();

}
//деструктор(по умолчанию)
secondwindow::~secondwindow()
{
    delete ui;
}

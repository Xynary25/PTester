#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H

#include<QString>
#include<string>
#include <vector>
#include <QStringList>

extern QStringList testNames;
extern int openedTableNumber;
extern QString openTest;
//--ИНФО
extern QString info_about_program;
//--ИТО(нпу)
extern QString test_ITO_inf;
extern std::vector<QString> test_ITO_vpr;
extern std::vector<int> test_ITO_bad_otv;
extern std::vector<int> test_ITO_bad_otv_Lie;
extern std::vector<int> test_ITO_bad_otv_Aggravity;
extern std::vector<int> test_ITO_bad_otv_Extraversion;
extern std::vector<int> test_ITO_bad_otv_Spontaneity;
extern std::vector<int> test_ITO_bad_otv_Aggressiveness;
extern std::vector<int> test_ITO_bad_otv_Rigidity;
extern std::vector<int> test_ITO_bad_otv_Introversion;
extern std::vector<int> test_ITO_bad_otv_Sensitivity;
extern std::vector<int> test_ITO_bad_otv_Anxiety;
extern std::vector<int> test_ITO_bad_otv_Lability;
//--прогноз(нпу)
extern QString test_PROGNOZ_1_info;
extern std::vector<QString> test_PROGNOZ_1_vpr;
extern std::vector<int> test_PROGNOZ_1_bad_otv;
extern std::vector<int> test_PROGNOZ_1_bad_otv_Stability;
extern std::vector<int> test_PROGNOZ_1_bad_otv_Lie;
//--ср-45(нпу)
extern QString test_SSR_info;
extern std::vector<QString> test_SSR;
extern std::vector<int> test_SSR_bad_otv;
extern std::vector<int> test_SSR_bad_otv_Lie;
extern std::vector<int> test_SSR_bad_otv_Sr;
extern std::vector<QString>test_SSR_analysis;
//--УВИ(организованность)
extern QString test_UVI_info;
extern std::vector<QString> test_UVI_vpr;
extern std::vector<int> test_UVI_otv_All;
extern std::vector<int> test_UVI_otv_A;
extern std::vector<int> test_UVI_otv_B;
extern std::vector<int> test_UVI_otv_V;
extern std::vector<int> test_UVI_otv_G;
extern std::vector<int> test_UVI_otv_EmotSphere;
extern std::vector<int> test_UVI_otv_WorkMotiv;
extern std::vector<int> test_UVI_otv_ValOrient;
extern std::vector<int> test_UVI_otv_Hedonism;
extern std::vector<int> test_UVI_otv_Reflection;
extern std::vector<int> test_UVI_otv_Irresponsibility;
extern std::vector<int> test_UVI_otv_Disordered;
extern std::vector<int> test_UVI_otv_Overcoming;
//--Оценка потребности в одобрении Марлоу-Крауна(Нормативность)
extern QString test_MarKrau_info;
extern std::vector<QString> test_MarKrau_vpr;
extern std::vector<int> test_MarKrau_bad_otv;
//--Методика способность самоуправления (тест ССУ)
extern QString test_SSU_info;
extern std::vector<QString>test_SSU_vpr;
extern std::vector<int>test_SSU_otv;//1-да, 0-нет
extern std::vector<int>test_SSU_otv_Contradictions;//Противоречия
extern std::vector<int>test_SSU_otv_Forecasting;//Прогнозирование
extern std::vector<int>test_SSU_otv_Goal_setting;//Целеполагание
extern std::vector<int>test_SSU_otv_Planning;//Планирование
extern std::vector<int>test_SSU_otv_QuaAs;//Критерий оценки качества
extern std::vector<int>test_SSU_otv_MakDecis;//Принятие решения
extern std::vector<int>test_SSU_otv_Self_control;//Самоконтроль
extern std::vector<int>test_SSU_otv_Correction;//Коррекция
//--ЛОСК(нпу)
extern std::vector<QString> test_LOSK;
//--Менеджер и коммуникация(навык управления коллективом для коммандиров)
extern QString test_MIK_info;
extern std::vector<QString> test_MIK_vpr;
extern std::vector<int> test_MIK_for_true_otv;
extern std::vector<int> test_MIK_for_false_otv;
extern std::vector<int> test_MIK_bad_otv;
//--Менеджер и человеческие отношения(навык управления коллективом для коммандиров)
extern QString test_MIChO_info;
extern std::vector<QString> test_MIChO_vpr;
extern std::vector<int> test_MIChO_for_true_otv;
extern std::vector<int> test_MIChO_for_false_otv;
extern std::vector<int> test_MIChO_bad_otv;
//--Диагностика защиты от манипуляций
extern QString test_DSPZ_info;
extern std::vector<QString> test_DSPZ_vpr;
extern std::vector<QString> test_DSPZ_otv_Peaceful;
extern std::vector<QString> test_DSPZ_otv_Avoidant;
extern std::vector<QString> test_DSPZ_otv_Aggressive;
//--Стиль руководства
extern QString test_StileManage_info;
extern std::vector<QString> test_StileManage_vpr;
extern std::vector<QString> test_StileManage_otv_Avto;
extern std::vector<QString> test_StileManage_otv_Demo;
extern std::vector<QString> test_StileManage_otv_Libe;

#endif // DATABASEHELPER_H


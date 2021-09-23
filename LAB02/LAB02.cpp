#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

struct student
{
    char name[N]; //Имя студента
    int amount_class; //Количество занятий, которые нужно посетить
    int number; //Номер зачетки
    int grants; //Сумма стипендии
} record_student;

struct teacher //Преподаватель
{
    char name[N]; //Имя преподавателя
    int amount_class; //Количество занятий, которые нужно провести преподавателю
    int salary; //Сумма заработной платы
    int rating; //Рейтинг преподавателя
}record_teacher;

struct VUZ //ВУЗ
{
    char name[N]; //Название учреждения
    int amount_class; //Количество занятий, которые нужно провести вузу
    int rating; //Рейтинг вуза
}record_VUZ;

struct ministry //Министерство
{
    char name[N]; //Название министерства
    int amount_class; //Количество занятий, которые нужно провести по плану
}record_ministry;

struct state //Государство
{
    char name[N]; //Название государства
    int amount_class; //Количество занятий, которые нужно провести по плану
}record_state;

void input_student() //Ввод данных для студента
{
    printf_s("\n\t\t\t\t\t«Ввод данных для студента»\n\n");
    printf_s("Введите имя студента: ");
    gets_s(record_student.name);
    printf_s("Введите количество занятий, которые нужно посетить студенту: ");
    scanf_s("%d", &record_student.amount_class);
    while (getchar() != '\n');
    printf_s("Введите номер зачетки студента: ");
    scanf_s("%d", &record_student.number);
    while (getchar() != '\n');
    printf_s("Введите сумму стипендии: ");
    scanf_s("%d", &record_student.grants);
    while (getchar() != '\n');
}

void input_teacher() //Ввод данных для преподавателя
{
    printf_s("\n\t\t\t\t\t«Ввод данных для преподавателя»\n\n");
    printf_s("Введите имя преподавателя: ");
    gets_s(record_teacher.name);
    printf_s("Введите количество занятий, которые нужно провести преподавателю: ");
    scanf_s("%d", &record_teacher.amount_class);
    while (getchar() != '\n');
    printf_s("Введите сумму заработной платы: ");
    scanf_s("%d", &record_teacher.salary);
    while (getchar() != '\n');
    printf_s("Введите рейтинг преподавателя от 0 до 100: ");
    scanf_s("%d", &record_teacher.rating);
    while (getchar() != '\n');
}

void input_VUZ() //Ввод данных для ВУЗА
{
    printf_s("\n\t\t\t\t\t«Ввод данных для ВУЗА»\n\n");
    printf_s("Введите название учреждения: ");
    gets_s(record_VUZ.name);
    printf_s("Введите количество занятий, которые нужно провести ВУЗУ: ");
    scanf_s("%d", &record_VUZ.amount_class);
    while (getchar() != '\n');
    printf_s("Введите рейтинг ВУЗА от 0 до 100: ");
    scanf_s("%d", &record_VUZ.rating);
    while (getchar() != '\n');
}

void input_ministry() //Ввод данных для министерства
{
    printf_s("\n\t\t\t\t\t«Ввод данных для министерства»\n\n");
    printf_s("Введите название министерства: ");
    gets_s(record_ministry.name);
    printf_s("Введите количество занятий, которые нужно провести по плану: ");
    scanf_s("%d", &record_ministry.amount_class);
    while (getchar() != '\n');
}

void input_state() //Ввод данных для государства
{
    printf_s("\n\t\t\t\t\t«Ввод данных для государства»\n\n");
    printf_s("Введите название государства: ");
    gets_s(record_state.name);
    printf_s("Введите количество занятий, которые нужно провести по плану: ");
    scanf_s("%d", &record_state.amount_class);
    while (getchar() != '\n');
}

void output_student() //Вывод данных для студента
{
    printf_s("\n\t\t\t\t\t«Вывод данных для студента»\n\n");
    printf_s("Имя студента: ");
    puts(record_student.name);
    printf_s("\nКоличество занятий, которые нужно посетить студенту: %d", record_student.amount_class);
    printf_s("\nНомер зачетки студента: %d", record_student.number);
    printf_s("\nCумму стипендии у студента: %d", record_student.grants);
}

void output_teacher() //Вывод данных для преподавателя
{
    printf_s("\n\t\t\t\t\t«Вывод данных для преподавателя»\n\n");
    printf_s("Имя преподавателя: ");
    puts(record_teacher.name);
    printf_s("\nКоличество занятий, которые нужно провести преподавателю: %d", record_teacher.amount_class);
    printf_s("\nСумма заработной платы преподавателя: %d", record_teacher.salary);
    printf_s("\nРейтинг преподавателя от 0 до 100: %d", record_teacher.rating);
}

void output_VUZ() //Вывод данных для ВУЗА
{
    printf_s("\n\t\t\t\t\t«Вывод данных для ВУЗА»\n\n");
    printf_s("Название учреждения: ");
    puts(record_VUZ.name);
    printf_s("\nКоличество занятий, которые нужно провести ВУЗУ: %d", record_VUZ.amount_class);
    printf_s("\nРейтинг ВУЗА от 0 до 100: %d", record_VUZ.rating);
}

void output_ministry() //Вывод данных для министерства
{
    printf_s("\n\t\t\t\t\t«Вывод данных для министерства»\n\n");
    printf_s("Название министерства: ");
    puts(record_ministry.name);
    printf_s("\nКоличество занятий, которые нужно провести по плану: %d", record_ministry.amount_class);
}

void output_state() //Вывод данных для государства
{
    printf_s("\n\t\t\t\t\t«Вывод данных для государства»\n\n");
    printf_s("Название государства: ");
    puts(record_state.name);
    printf_s("\nКоличество занятий, которые нужно провести по плану: %d\n", record_state.amount_class);
}

void analysis()
{
    int f = 1; //Флаг
    if (record_state.amount_class > record_ministry.amount_class) //Если количество занятий по плану госудаства не сходится с количеством по плану министерства
    {
        puts(record_state.name);
        printf_s("Требует от\n");
        puts(record_ministry.name);
        printf_s("Проведения большего количество занятий\n\n\n");
        f = 0;
    }

    if (record_ministry.amount_class > record_VUZ.amount_class) //Если количество занятий по плану министерства не сходится с количеством по плану ВУЗА
    {
        puts(record_ministry.name);
        printf_s("Требует от\n");
        puts(record_VUZ.name);
        printf_s("Проведения большего количество занятий\n\n\n");
        f = 0;
    }

    if (record_VUZ.amount_class > record_teacher.amount_class) //Если количество занятий по плану ВУЗА не сходится с количеством по плану преподавателя
    {
        puts(record_VUZ.name);
        printf_s("Требует от\n");
        puts(record_teacher.name);
        printf_s("Проведения большего количество занятий\n\n\n");
        f = 0;
    }

    if (record_teacher.amount_class > record_student.amount_class) //Если количество занятий по плану преподавателя не сходится с количеством посещения студента
    {
        puts(record_teacher.name);
        printf_s("Требует от\n");
        puts(record_student.name);
        printf_s("Посещения большего количество занятий\n\n\n");
        f = 0;
    }
    if (f)
    {
        printf_s("\n\n\nВсе хорошо! Результаты количества занятий хорошие!\n\n\n");
    }
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "RUSSIAN");

    do
    {
        system("cls");
        printf_s("\n\t\t\t\t\t«Ввод данных»\n\n");
        input_student(); //Ввод данных для студента
        input_teacher(); //Ввод данных для преподавателя
        input_VUZ(); //Ввод данных для ВУЗА
        input_ministry(); //Ввод данных для министерства
        input_state(); //Ввод данных для государства
        system("pause");
        printf_s("\n\t\t\t\t\t«Вывод данных»\n\n");
        output_student(); //Вывод данных для студента
        output_teacher(); //Вывод данных для преподавателя
        output_VUZ(); //Вывод данных для ВУЗА
        output_ministry(); //Вывод данных для министерства
        output_state(); //Вывод данных для государства
        system("pause");
        printf_s("\n\t\t\t\t\t«Анализ»\n\n");
        analysis();
        printf_s("\n\nЧТОБЫ ПРОДОЛЖИТЬ РАБОТУ ПРОГРАММЫ С НОВЫМИ ДАННЫМИ - НАЖМИТЕ ЛЮБУЮ КЛАВИШУ(КРОМЕ ESC)\n");
        printf_s("ESC - ВЫХОД");
    } while (_getch() != 27);
}


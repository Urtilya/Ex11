
# Ex11 Создание и использование связанного списка

## Поезд

### Формулировка задачи

Есть поезд, состоящий из некоторого количества вагонов. Вы находитесь в одном из них. Это очень странный поезд, потому что его вагоны сцеплены в кольцо. В каждом вагоне есть лампочка, которую вы можете включать и выключать. Ваша задача заключается в том, чтобы **определить количество вагонов в поезде**. 

Других людей и прочих живых или неживых существ в поезде нет. Лампочки нельзя выкручивать, они не перегорают и не нагреваются, рисовать на стенах мелом нельзя, окон у вагонов нет. В общем, состояние поезда — это только лампочки. Кстати, начальное состояние поезда неизвестно, то есть изначально какие-то лампочки могут гореть, а какие-то не гореть. Единственный способ узнать, горит ли лампочка в определенном вагоне — это войти в него и посмотреть.

### Алгоритм

Разработать алгоритм для решения задачи.


### Модель поезда

Модель поезда можно представить в виде двусвязного списка, где элементами выступают вагоны (**Cage**)

Класс **Cage** выглядит так:

```cpp
// класс "Вагон"
class Cage
{
    bool light; // Свет (вкл/выкл)
public:
    Cage* next; // следующий вагон
    Cage* prev; // предыдущий вагон
    Cage(): light(false), next(nullptr), prev(nullptr) {}
    void on()  { light=true;    }
    void off() { light = false; }
    bool get() const  { return light;  }
};
```

Начало класса **Train**:

```cpp
class Train 
{
    Cage* first; // указатель на первый вагон
    Cage* last;  // указатель на последний вагон
    ...
```

Добавить в класс следующие методы:

- конструктор (пустой поезд)
- добавление вагона с (выключенной/включенной) лампочкой
- печать состояния всех вагонов в поезде
- нахождение длины поезда

### Тесты

Написать несколько тестов для вычисления длины поезда (не менее 3).


### Приложение

> Написать демонстрационную программу с вычислением длины созданного поезда


## Структура проекта

- **include/train.h** - заголовочный файл для  класса **Train**.
- **src/train.cpp** - файл с реализацией методов класса.
- **src/main.cpp** - домонстрационная программы для работы с функцией.

 
## Список участников/веток

1. Малинин  Дмитрий Дмитриевич  19 ПМИ-2 b60
1. Бакланов Алексей Александрович   19 ПМИ-2 b61
1. Баринов  Даниил  Сергеевич   19 ПМИ-1 b62
1. Богомазов    Михаил  Васильевич  19 ПМИ-1 b63
1. Бугров   Лев Валерьевич  19 ПМИ-1 b64
1. Бузанов  Егор    Андреевич   19 ПМИ-1 b65
1. Варлачёв Валерий Максимович  19 ПМИ-1 b66
1. Голованов    Денис   Максимович  19 ПМИ-1 b67
1. Дробот   Елизавета   Денисовна   19 ПМИ-1 b68
1. Жаравина Полина  Дмитриевна  19 ПМИ-1 b69
1. Зайцев   Тимур   Олегович    19 ПМИ-1 b70
1. Кабанов  Денис   Сергеевич   19 ПМИ-1 b71
1. Канев    Владислав   Олегович    19 ПМИ-1 b72
1. Карцева  Мария   Дмитриевна  19 ПМИ-1 b73
1. Касьянов Никита  Юрьевич 19 ПМИ-1 b74
1. Козлова  Дарья   Андреевна   19 ПМИ-1 b75
1. Кузнецов Михаил  Дмитриевич  19 ПМИ-1 b76
1. Лавров   Артём   Романович   19 ПМИ-1 b77
1. Матвеев  Андрей  Сергеевич   19 ПМИ-1 b78
1. Машанова Карина  Алексеевна  19 ПМИ-1 b79
1. Наумов   Никита  Александрович   19 ПМИ-1 b80
1. Нещеткин Глеб    Максимович  19 ПМИ-1 b81
1. Пасманик Ирина   Дмитриевна  19 ПМИ-1 b82
1. Рогозян  Анастасия   Тимофеевна  19 ПМИ-1 b83
1. Соболев  Данил   Александрович   19 ПМИ-1 b84
1. Софронов Валерий Александрович   19 ПМИ-1 b85
1. Трутнев  Алексей Игоревич    19 ПМИ-1 b86
1. Тумаков  Вадим   Сергеевич   19 ПМИ-1 b87
1. Фролова  Ольга   Михайловна  19 ПМИ-1 b88
1. Шарибжанова  Диана   Рашидовна   19 ПМИ-1 b89
1. Щеникова Анна    Юрьевна 19 ПМИ-1 b90
1. Андросов Вадим   Дмитриевич  19 ПМИ-2 b91
1. Бирина   Елизавета   Сергеевна   19 ПМИ-2 b92
1. Булатов  Дмитрий Александрович   19 ПМИ-2 b93
1. Демашов  Никита  Александрович   19 ПМИ-2 b94
1. Добряев  Иван    Александрович   19 ПМИ-2 b95
1. Дрожжачих    Евгений Валерьевич  19 ПМИ-2 b96
1. Егорова  Кристина    Олеговна    19 ПМИ-2 b97
1. Загоскин Владислав   Андреевич   19 ПМИ-2 b98
1. Зарубина Ирина   Михайловна  19 ПМИ-2 b99
1. Иванов   Даниил  Андреевич   19 ПМИ-2 b100
1. Клыков   Антон   Романович   19 ПМИ-2 b101
1. Королев  Денис   Витальевич  19 ПМИ-2 b102
1. Краюшкина    Екатерина   Алексеевна  19 ПМИ-2 b103
1. Назаров  Вячеслав    Андреевич   19 ПМИ-2 b104
1. Оленев   Дмитрий Сергеевич   19 ПМИ-2 b105
1. Панина   Полина  Сергеевна   19 ПМИ-2 b106
1. Прыгаев  Денис   Алексеевич  19 ПМИ-2 b107
1. Рогов    Андрей  Дмитриевич  19 ПМИ-2 b108
1. Симонова Арина   Валерьевна  19 ПМИ-2 b109
1. Созинов  Кирилл  Игоревич    19 ПМИ-2 b110
1. Титова   Нина    Ивановна    19 ПМИ-2 b111
1. Уртюков  Илья    Алексеевич  19 ПМИ-2 b112
1. Хорев    Егор    Алексеевич  19 ПМИ-2 b113
1. Шабаршин Леонид  Георгиевич  19 ПМИ-2 b114


## Алгоритм выполнения работы

Для выполнения работы необходимо:

1. Выполнить *fork* репозитария в свой аккаунт.
1. Выполнить клонирование репозитария из своего аккаунта к себе на локальную машину (`git clone`).
1. Создать ветку **git** с индивидуальным номером (`git branch имя_ветки`).
1. Сделать ветку активной (`git checkout имя`).
1. Необходимо разместить как исходные файлы с решениями задач, поместив **cpp** файлы в **src**, а заголовочные - в **include**. 
1. Добавить файлы в хранилище (`git add`).
1. Выполнить фиксацию изменений (`git commit -m "комментарий"`).
1. Отправить содержимое ветки в свой удаленный репозитарий (`git push origin имя_ветки`).
1. Создать пул-запрос в репозитарий группы и ждать результата от **GitHub Actions**.


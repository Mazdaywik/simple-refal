﻿# Рекомендации по стилю оформления
Эти рекомендации относятся только к оформлению исходных текстов
Рефала-5λ, его рантайма, утилит rlmake и lexgen, автотестов и примеров кода,
а также любых других программ, которые будут включаться в этот репозиторий
(за исключением подключения других программ как подмодулей).

В старом коде или в исторической документации могут наблюдаться отклонения
от этих рекомендаций, их не следует исправлять до тех пор, пока старый код
не потребуется изменить. Историческую документацию вообще править не следует.

Рекомендации не навязываются как единственно верные при написании любых
других программ на Рефале-5λ или C++.

## Цели, положенные в основу
* Лёгкость чтения.
* Удобство форматирования в примитивных текстовых редакторах.
* Единообразие подхода.

## Глобальные рекомендации, касающиеся документации и исходных текстов
* Максимальная длина строки в текстовых файлах ограничена 80 символами
* Для форматирования не используется табуляция, за исключением случаев, когда
  этого требует синтаксис языка (т. е. Makefile).
* В документации (`*.md`) следует использовать символы Юникода вместо их
  суррогатов из ASCII: `«`, `»`, `’`, `…`, `—` и т.д. вместо `"`, `'`, `...`,
  `-`, `--`, `---`. Неразрывный пробел, там где он должен быть (после коротких
  союзов и предлогов, перед единицами измерения, частицами «бы» и «же» и т.д.),
  должен быть всегда. Для правки документации следует использовать текстовые
  редакторы, которые не портят неразрывные пробелы.
* В комментариях к исходным текстам использование типографских юникодовских
  символов приветствуется, но не требуется. Неразрывный пробел в исходниках
  **не используется**, потому что ряд программистских редакторов их может
  не понимать или портить (заменять на обычные).
* Точки над буквой «ё» пишутся всегда.
* Вывод программ на stdout может включать в себя только символы первой половины
  таблицы ASCII (латинские буквы, цифры, знаки препинания).
* Сообщения коммитов пишутся на русском языке.
* Длина сообщения коммита также ограничена 80 символами, но, если есть ссылка
  на задачу (issue), то 76 символами. Если хочется написать больше — пишется
  многострочный коммит, причём первая строка отделяется пустой строкой
  от последующих.
* Ссылка на задачу в сообщении коммита пишется в скобках: (#15).
* Строки в текстовых файлах (исходный код, документация) не должны кончаться
  на пробелы. Обычно при коммите git об этом предупреждает.

## Общие рекомендации, касающиеся Рефала-5λ и C++

* Стандартный отступ равен двум пробелам. Это значит, что любые другие
  отступы должны быть кратны двум пробелам.
* Код не выравнивается по имени функции.

Хорошо:

```
+<FooBar
+  текст внутри идёт с отступом 2 пробела
+>

+void foo_bar(
+  int foo,
+  int bar
+) {

+x = bar_foo(
+  foo, bar
+);
```

Плохо:

```
-<FooBar текст выравнивается
-        по имени функции>

-void foo_bar(int foo,
-             int bar)
-{

-x = bar_foo(foo,
-            bar);
```

* Не рекомендуется использовать имена функций и переменных из одной-двух букв
  или цифр. Имя должно отражать назначение переменной или функции.
* Если переменная хранит имя временного файла или путь к каталогу временных
  файлов, то её имя может называться `temp`, `tmp`, `e.Temporary` и т.д.
  В остальных случаях имена типа `temp` или `tmp` являются недопустимыми.
* Имена функций и переменных не должны заканчиваться на цифру, если нет на то
  веских оснований (а их, как правило, нет).
  * В Рефале часто пишутся служебные функции, которые вызываются из материнской.
    Однако, эта распространённая традиция в этом репозитории не приветствуется.
    Вместо имён вида `Func`, `Func1`, `Func2` следует давать имена вида `Func`
    для «основной» функции и `Func-Пояснение` для вспомогательных. `-Пояснение`
    должно отражать смысл этой вспомогательной функции, например,
    `ProcessFileNames-CheckInvalid`. Часто, когда вспомогательная функция одна,
    можно использовать суффикс `-Aux`.

## Рекомендации по оформлению кода на Рефале-5λ
* Каждому `$EXTERN`-объявлению должен предшествовать комментарий `*$FROM`,
  содержащий имя файла (без расширения), в котором определены эти функции.
  * Следствие: в один список `$EXTERN` не следует включать имена функций,
    импортируемых из разных файлов.
* `$EXTERN`-объявления пишутся в самом начале файла.
* Функции обычно пишутся в порядке от общих к частным. Например, если модуль
  содержит функцию `$ENTRY Go`, то её определение следует непосредственно
  после всех `$EXTERN` объявлений.
  * Исключение: функции, вводимые как `$ENUM`, `$EENUM`, `$SWAP` или `$ESWAP`,
    описываются перед первым их использованием.
  * Короткие функции могут описываться перед первым их использованием, если
    это повышает ясность программы.
* Для имён функций и переменных используется CamelCase. Дефис используется для
  отделения крупных смысловых частей, обычно для вспомогательных функций это имя
  «главной» функции и пояснение предназначения вспомогательной.
  * Подчёркивание («нижнее подчёркивание») в именах функций и переменных
    на Рефале не используется.
  * Для поиска в ассоциативных списках началу и концу списка даётся одно и то же
    имя с суффиксами `-B` и `-E` соответственно. Например:

    `e.Names-B (e.Name s.Index) e.Names-E`

    * Если ассоциативный список содержит 3 компоненты, средняя получает суффикс
      `-M`:

      `e.Names-B (e.Name s.Index1) e.Names-M (e.Name s.Index2) e.Names-E`

      Кстати, здесь оправдано использование чисел в именах переменных: два
      вхождения одинаковой по смыслу сущности.
* Определение функции оформляется следующим образом: имя функции, в той же
  строке открывающая фигурная скобка, предложения функции, отдельной строкой
  закрывающая фигурная скобка:
```
ИмяФункции {
  тело функции
}
```
* Образец (левая часть предложения) пишется с одинарным отступом (2 пробела).
* (**Устаревшее правило**) Правая часть пишется либо в той же строке с образцом,
  либо с новой строки с дополнительным отступом (т. е. 4 пробела).
* Правая часть либо пишется на той же строке с образцом, либо на следующей,
  начиная со знака `=` с дополнительным отступом относительно левой части (т. е.
  4 пробела). Но если правая часть разбивается на несколько строк, то строки,
  кроме первой, пишутся с ещё одним отступом (6 пробелов).
* Условие или присваивание пишется с отступом относительно образца предложения
  и либо располагается в одной строке, либо (если не влезает или для улучшения
  читабельности) разбивается по знаку `:`, при этом двоеточие пишется в начале
  следующей строки с тем же отступом, что и `=`. Если образец условия или
  присваивания разбивается на несколько строк, строки, кроме первой, пишутся
  с дополнительным отступом относительно первой.
* Если левая часть предложения и следующие за ней условия и присваивания
  все вместе короткие и влезают на одну строку, то их можно записать в одной
  строке. Если всё предложение, включая присваивания и условия, короткое,
  то его целиком можно записать на одной строке.
* После знаков `=`, `,`, `:` всегда ставится один пробел. Перед `=` и `:`
  ставится пробел. Перед `,`, `;` пробел не ставится.
* Код, написанный до реализации синтаксиса условий и присваиваний,
  переформатируется, только если в него вносятся правки. Причём обновление
  форматирования крайне желательно делать отдельным коммитом.

Таким образом, предложение выглядит так:

```
ИмяФункции {
  …
  ЛеваяЧасть = ПраваяЧасть;

  ДлиннаяДлиннаяЛеваяЧасть
    = ДлиннаяДлиннаяПраваяЧасть;

  ДлиннаяДлиннаяЛеваяЧасть
    = ДлиннаяДлиннаяДлиннаяДлинная
      ДлиннаяДлиннаяДлиннаяПраваяЧасть;

  ЛеваяЧасть
    , РезультатУсловия : ОбразецУсловия
    = РезультатПрисваивания : ОбразецПрисваивания
    = ПраваяЧасть;

  ЛеваяЧасть
    , ДлинныйДлинныйДлинныйДлинный
      ДлинныйРезультатУсловия
    : ДлинныйДлинныйДлинныйДлинный
      ДлинныйОбразецУсловия
    = ПраваяЧасть;

  // Короткое предложение
  ЛевЧа, РеУс : ОбУс = РеПри : ОбПри = ПраЧа;
}
```

* Если выражение (образец или результат) слишком длинное, то разбивается
  по границам термов верхнего уровня.

Правильно (скобочные термы не разбиваются):

```
+  (e.ОднаждыВ t.Студёную s.Зимнюю) s.Пору
+  (t.ЯИзЛесу e.Вышел t.Был s.СильныйМороз)
```

Неправильно (один скобочный терм разбивается):

```
-  (e.ОднаждыВ t.Студёную s.Зимнюю) s.Пору (t.ЯИзЛесу e.Вышел
-  t.Был s.СильныйМороз)
```

* Выражение в скобках можно разбивать на несколько строк, но при этом
  на строках скобками располагаются только скобки, содержимое скобок пишется
  с отступом. Открывающая и закрывающая скобки пишутся в одной колонке.
* Имя функции или АТД считаются частью открывающей скобки. Иногда
  первый терм круглых скобок мыслится как тег типа, он тоже «приклеивается»
  к круглой скобке.

Правильно:

```
+<НарезатьСалатРекурсивный
+  <ПомытьОвощи
+    e.Огурцы e.Помидоры t.Салат
+  >
+  (#Специи
+    (
+      <Майонез>
+      <Сметана>
+    )
+    (
+      [Соль]
+      [Перец
+        #Чёрный
+        #Красный
+      ]
+    )
+  )
+>
```

Неправильно:

```
-<НарезатьСалатРекурсивный <ПомытьОвощи e.Огурцы
-                                       e.Помидоры t.Салат>
-                          (#Специи (<Майонез>
-                                    <Сметана>)
-                          ([Соль]
-                           [Перец #Чёрный
-                           #Красный]))>
```

* Вспомогательные функции, реализующие цикл на хвостовой рекурсии
  (остаточно-рекурсивный цикл), начинаются с префикса `Do`:

```
Fact {
  0 = 1;
  s.N = <DoFact 1 1 s.N>;
}

DoFact {
  s.N s.Prod s.N = <Mul s.N s.Prod>;

  s.K s.Prod s.N
    = <DoFact <Inc s.K> <Mul s.K s.Prod> s.N>;
}
```

* Вспомогательные функции, реализующие выбор в зависимости от условий,
  начинаются с префикса `Sw`. Хотя вместо таких функций рекомендуется
  использовать блоки.
* Вместо остаточно-рекурсивных циклов (см. выше) рекомендуется использовать
  библиотечные функции `Map`, `MapAccum` или `Reduce`, если это не снижает
  читабельность кода.

## Рекомендации по оформлению кода на C++
* Имена типов записываются в CamelCase.
* Имена функций и переменных записываются в_нижнем_регистре_с_подчёркиваниями.
* В фигурные скобки заключаются даже одиночные операторы:

```C++
if (x != 0) {
  y = x;
}
```

* Открывающая фигурная скобка пишется в той же строке, что и оператор.
  Ключевое слово `else` пишется после закрывающей фигурной скобки:

```C++
if (x != 0) {
  y = x;
} else {
  z = y;
}
```

* Глобальные переменные начинаются с префикса `g_`, статические переменные
  (внутри функции) — с префикса `s_`.
* Закрытые (private) данные-члены класса начинаются с префикса `m_`,
  закрытые статические — `sm_`. Открытые поля структур пишутся без префиксов.
* В операторе `switch` должны быть явным образом перечислены все допустимые
  варианты. Если переход на ветку `default:` никогда не должен происходить,
  то в ней располагается вызов макроса
  `refalrts_switch_default_violation(выражение_внутри_switch)`,
  который при передаче управления на него выбрасывает исключение. Таким
  образом выявляются ошибки в программе, связанные с передачей неверных данных.
* Директивы условной компиляции препроцессора, в отличие от обычного кода
  на C++, работают на более низком семантическом уровне — оперируют с текстом
  как с набором строк и «нарезают» его в зависимости от макросов препроцессора.

  Поэтому они не подчиняются обычным правилам отступов и пишутся сразу
  от начала строки

```C++
      case icPerformNative:
        {
#ifdef ENABLE_DEBUGGER
          if (debugger.handle_function_call(begin, end, callee) == cExit) {
            return cExit;
          }
#endif  // ifdef ENABLE_DEBUGGER
          RefalNativeFunction *native_callee =
            static_cast<RefalNativeFunction*>(callee);
```

* После директивы `#endif` должен располагаться комментарий с текстом условия
  в соответствующем `#if` или `#ifdef`. Пример — см. выше.

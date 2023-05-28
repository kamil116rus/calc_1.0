
#!/bin/bash

parametr1=$1

parametr2=$2

script_name=$0 #присваиваем переменной script_name значение имени скрипта

echo "Вы запустили скрипт с именем $script_name и параметром $parametr1 и $parametr2"

clang-format -i *.c *.h

git add . 
git commit -m"$parametr1 $parametr2 $parametr3 $parametr4 $parametr5 $parametr6 $parametr7"
git push origin main

#gcc -Wall -Werror -Wextra 

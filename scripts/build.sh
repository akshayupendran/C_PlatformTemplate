#astyle --options="./../astyle.options" "./../src/*"
clang-format -i --verbose --style=file ./../src/*.c ./../src/*.h
#gcc ./../src/main.c -Wall -Wextra -pedantic-errors -o ./../bin/main
clang -Werror -Weverything -pedantic-errors ./../src/main.c -o ./../bin/main

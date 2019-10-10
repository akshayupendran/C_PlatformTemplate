#astyle --options="./../astyle.options" "./../src/*"
clang-format -i --verbose --style=file ./../src/*.c ./../src/*.h
gcc ./../src/main.c -Wall -Wextra -pedantic-errors -o ./../bin/main

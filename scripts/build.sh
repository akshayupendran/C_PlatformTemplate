astyle --options="./../astyle.options" "./../src/*"
gcc ./../src/main.c -Wall -Wextra -pedantic-errors -o ./../bin/main

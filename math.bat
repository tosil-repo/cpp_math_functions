@echo off 
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 main.cpp math.cpp math.hpp -o math
math.exe
gcovr -r .


@echo off
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 example.cpp -o program
program.exe
gcovr -r .

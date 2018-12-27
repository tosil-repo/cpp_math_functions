@echo off
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 main.cpp math.cpp -o program
program.exe
gcovr -r . --html --html-details -o gcovr-report.html
gcovr -r . --xml-pretty -o gcover-report.xml

@echo off
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 main.cpp math.cpp -o math
math.exe
gcovr -r . --html --html-details -o example-html-details.html
gcovr -r . --xml-pretty -o gcovr-report.xml
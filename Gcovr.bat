@echo off
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 main.cpp math.cpp -o output.exe
output.exe
gcovr -r . --html --html-details -o gcovr_report.html
gcovr -r . --xml-pretty -o gcovr_report.xml

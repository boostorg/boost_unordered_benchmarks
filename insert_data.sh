#!/bin/bash

python2 insert_data.py clang-x64/running_insertion.cpp.csv "Running insertion"             "clang-x64/Running insertion.xlsx"             "plot"
python2 insert_data.py clang-x64/running_erasure.cpp.csv   "Running erasure"               "clang-x64/Running erasure.xlsx"               "plot"
python2 insert_data.py clang-x64/scattered_lookup.cpp.csv  "Scattered successful lookup"   "clang-x64/Scattered successful looukp.xlsx"   "plot"
python2 insert_data.py clang-x64/scattered_lookup.cpp.csv  "Scattered unsuccessful lookup" "clang-x64/Scattered unsuccessful looukp.xlsx" "plot"

python2 insert_data.py clang-asan-x64/running_insertion.cpp.csv "Running insertion"             "clang-asan-x64/Running insertion.xlsx"             "plot"
python2 insert_data.py clang-asan-x64/running_erasure.cpp.csv   "Running erasure"               "clang-asan-x64/Running erasure.xlsx"               "plot"
python2 insert_data.py clang-asan-x64/scattered_lookup.cpp.csv  "Scattered successful lookup"   "clang-asan-x64/Scattered successful looukp.xlsx"   "plot"
python2 insert_data.py clang-asan-x64/scattered_lookup.cpp.csv  "Scattered unsuccessful lookup" "clang-asan-x64/Scattered unsuccessful looukp.xlsx" "plot"

python2 insert_data.py fil-c-x64/running_insertion.cpp.csv "Running insertion"             "fil-c-x64/Running insertion.xlsx"             "plot"
python2 insert_data.py fil-c-x64/running_erasure.cpp.csv   "Running erasure"               "fil-c-x64/Running erasure.xlsx"               "plot"
python2 insert_data.py fil-c-x64/scattered_lookup.cpp.csv  "Scattered successful lookup"   "fil-c-x64/Scattered successful looukp.xlsx"   "plot"
python2 insert_data.py fil-c-x64/scattered_lookup.cpp.csv  "Scattered unsuccessful lookup" "fil-c-x64/Scattered unsuccessful looukp.xlsx" "plot"

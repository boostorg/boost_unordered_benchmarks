#!/bin/bash

python2 insert_data.py gcc-x64/unordered.cpp.txt README.md
python2 insert_data.py gcc-x64/unordered_flat.cpp.txt README.md
python2 insert_data.py gcc-x64/word_count.cpp.txt README.md

python2 insert_data.py clang-x64/unordered.cpp.txt README.md
python2 insert_data.py clang-x64/unordered_flat.cpp.txt README.md
python2 insert_data.py clang-x64/word_count.cpp.txt README.md

python2 insert_data.py -e utf-16 vs-x64/unordered.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x64/unordered_flat.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x64/word_count.cpp.txt README.md

python2 insert_data.py clang-arm64/unordered.cpp.txt README.md
python2 insert_data.py clang-arm64/unordered_flat.cpp.txt README.md
python2 insert_data.py clang-arm64/word_count.cpp.txt README.md

python2 insert_data.py gcc-x86/unordered.cpp.txt README.md
python2 insert_data.py gcc-x86/unordered_flat.cpp.txt README.md
python2 insert_data.py gcc-x86/word_count.cpp.txt README.md

python2 insert_data.py clang-x86/unordered.cpp.txt README.md
python2 insert_data.py clang-x86/unordered_flat.cpp.txt README.md
python2 insert_data.py clang-x86/word_count.cpp.txt README.md

python2 insert_data.py -e utf-16 vs-x86/unordered.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x86/unordered_flat.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x86/word_count.cpp.txt README.md

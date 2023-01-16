#!/bin/bash

python2 insert_data.py gcc-x64/main.cpp.txt README.md

python2 insert_data.py clang-x64/main.cpp.txt README.md

#python2 insert_data.py vs-x64/main.cpp.txt README.md

python2 insert_data.py clang-arm64/main.cpp.txt README.md

python2 insert_data.py gcc-x86/main.cpp.txt README.md

python2 insert_data.py clang-x86/main.cpp.txt README.md

#python2 insert_data.py vs-x86/main.cpp.txt README.md

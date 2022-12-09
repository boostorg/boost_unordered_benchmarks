#!/bin/bash

python2 insert_data.py gcc-x64/string.cpp.txt      README.md
python2 insert_data.py gcc-x64/string_view.cpp.txt README.md
python2 insert_data.py gcc-x64/uint32.cpp.txt      README.md
python2 insert_data.py gcc-x64/uint64.cpp.txt      README.md
python2 insert_data.py gcc-x64/uuid.cpp.txt        README.md
python2 insert_data.py gcc-x64/word_count.cpp.txt  README.md
python2 insert_data.py gcc-x64/word_size.cpp.txt   README.md

python2 insert_data.py clang-x64/string.cpp.txt      README.md
python2 insert_data.py clang-x64/string_view.cpp.txt README.md
python2 insert_data.py clang-x64/uint32.cpp.txt      README.md
python2 insert_data.py clang-x64/uint64.cpp.txt      README.md
python2 insert_data.py clang-x64/uuid.cpp.txt        README.md
python2 insert_data.py clang-x64/word_count.cpp.txt  README.md
python2 insert_data.py clang-x64/word_size.cpp.txt   README.md

python2 insert_data.py -e utf-16 vs-x64/string.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x64/string_view.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x64/uint32.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x64/uint64.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x64/uuid.cpp.txt        README.md
python2 insert_data.py -e utf-16 vs-x64/word_count.cpp.txt  README.md
python2 insert_data.py -e utf-16 vs-x64/word_size.cpp.txt   README.md

python2 insert_data.py clang-arm64/string.cpp.txt      README.md
python2 insert_data.py clang-arm64/string_view.cpp.txt README.md
python2 insert_data.py clang-arm64/uint32.cpp.txt      README.md
python2 insert_data.py clang-arm64/uint64.cpp.txt      README.md
python2 insert_data.py clang-arm64/uuid.cpp.txt        README.md
python2 insert_data.py clang-arm64/word_count.cpp.txt  README.md
python2 insert_data.py clang-arm64/word_size.cpp.txt   README.md

python2 insert_data.py gcc-x86/string.cpp.txt      README.md
python2 insert_data.py gcc-x86/string_view.cpp.txt README.md
python2 insert_data.py gcc-x86/uint32.cpp.txt      README.md
python2 insert_data.py gcc-x86/uint64.cpp.txt      README.md
python2 insert_data.py gcc-x86/uuid.cpp.txt        README.md
python2 insert_data.py gcc-x86/word_count.cpp.txt  README.md
python2 insert_data.py gcc-x86/word_size.cpp.txt   README.md

python2 insert_data.py clang-x86/string.cpp.txt      README.md
python2 insert_data.py clang-x86/string_view.cpp.txt README.md
python2 insert_data.py clang-x86/uint32.cpp.txt      README.md
python2 insert_data.py clang-x86/uint64.cpp.txt      README.md
python2 insert_data.py clang-x86/uuid.cpp.txt        README.md
python2 insert_data.py clang-x86/word_count.cpp.txt  README.md
python2 insert_data.py clang-x86/word_size.cpp.txt   README.md

python2 insert_data.py -e utf-16 vs-x86/string.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x86/string_view.cpp.txt README.md
python2 insert_data.py -e utf-16 vs-x86/uint32.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x86/uint64.cpp.txt      README.md
python2 insert_data.py -e utf-16 vs-x86/uuid.cpp.txt        README.md
python2 insert_data.py -e utf-16 vs-x86/word_count.cpp.txt  README.md
python2 insert_data.py -e utf-16 vs-x86/word_size.cpp.txt   README.md


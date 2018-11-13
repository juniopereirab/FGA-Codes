#!/bin/bash

if [ "$#" -lt 1 ]; then
    echo "Usage: $0 {source.cpp}"
    exit
fi

impl=$1

g++ -o prog -std=c++17 -W -Wall main.cpp $1
./prog

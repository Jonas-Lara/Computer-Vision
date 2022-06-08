#/bin/bash

mkdir build && cd build

cmake ..

make

./Main

cd ..

rm -r build

#!/bin/bash

export RISCV='/opt/riscv'
PATH="$PATH:$RISCV/bin"

echo $RISCV
sleep 1

if [ ! $NUM_THREADS ]
then
	NUM_THREADS=8	#Set this as the number of logical cores of your CPU.
fi

sudo apt-get install -y build-essential git autoconf automake autotools-dev curl libmpc-dev \
	libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf \
	libtool patchutils bc zlib1g-dev libexpat-dev device-tree-compiler

#Build Compiler
git clone --recursive https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
git reset --hard da18f1cc2411099737df8845d3ec8945d94cc08f
./configure --prefix=$RISCV --with-arch=rv32im --with-abi=ilp32
make -j $NUM_THREADS
cd ../

#Build Proxy Kernel
git clone https://github.com/riscv/riscv-pk
cd riscv-pk
git reset --hard acbe166dac9d1db752ee95f61e65ca82bb875afb
mkdir build
cd build
../configure --prefix=$RISCV --host=riscv32-unknown-elf --with-arch=rv32im_zicsr_zifencei
make -j $NUM_THREADS
sudo make install
cp ./pk $RISCV/bin/pk
cd ../../

#Build simulator
git clone https://github.com/riscv/riscv-isa-sim
cd riscv-isa-sim
git reset --hard eb9a55a519634c146bc7f287e99315654f3067ad
mkdir build
cd build
../configure --prefix=$RISCV
make -j $NUM_THREADS
sudo make install
cd ../../

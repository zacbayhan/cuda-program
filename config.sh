#!/bin/bash


GPU=$(lspci | grep -i nvidia)

echo $GPU

grep -c ^processor /proc/cpuinfo  

#!/bin/bash
wget -q -O /tmp/liball.so
export L_PRELOAD = /tmp/liball.so

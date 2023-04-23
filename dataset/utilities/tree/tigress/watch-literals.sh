#!/bin/sh

while true; do
  inotifywait -e modify encodeliterals.sh > /dev/null 2>&1
  clear
  ./encodeliterals.sh 
done

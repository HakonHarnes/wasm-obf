#!/bin/sh

while true; do
  inotifywait -e modify antialiasanalysis.sh > /dev/null 2>&1
  clear
  ./antialiasanalysis.sh 
done

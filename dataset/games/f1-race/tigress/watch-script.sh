#!/bin/bash
while true; do
  inotifywait -e modify antialiasanalysis.sh > /dev/null 2>&1
  ./antialiasanalysis.sh 
done

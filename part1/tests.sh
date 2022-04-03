#!/bin/bash
clear
for i in 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18
do
  echo "Test $i:"
  ./mtm_tot < t/test$i.in > t/tmpout$i
  diff t/test$i.out t/tmpout$i
done
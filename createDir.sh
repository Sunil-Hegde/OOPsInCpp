#/bin/bash

a=1
while [ $a -lt 15 ]
    do
        mkdir program$a
    a=`expr $a + 1`
done
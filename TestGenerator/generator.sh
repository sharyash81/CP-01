#!/bin/bash
solution=$1
mkdir out
g++ $solution -o "solution"
chmod +x "solution"
for file in $(ls ./in/);do
        ext=$(echo $file | tr -dc '0-9')
        filename="output$ext.txt"
        ./"solution" < ./in/$file >> ./out/$filename
done


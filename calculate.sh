#!/bin/bash

#把x替换成具体的AT值
temp=$(echo $2 | sed 's/[xX]/'$1'/g')

#echo $2
#echo $1
#echo $temp

#计算
res=$(echo | awk "{printf $temp}")
#res=$( echo | 
#       awk '{ "echo $2 | tr '[:alpha:]' '$1' " | getline cmdout; print cmdout}'
#     )

echo $res

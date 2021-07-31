#!/bin/sh
cat /etc/passwd | \
sed -n '/#/!p' | \
sed -n '0~2p' | \
sed 's/:.*//' | \
rev | \
sort -r | \
sed -n "$FT_LINE1, $FT_LINE2 p" | \
tr '\n' ',' | \
sed 's/,/, /g' | \
sed -r 's/, $/./'
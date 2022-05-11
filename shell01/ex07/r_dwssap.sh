#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -f 1 -d : | rev | sort -r| awk -v n1=$FT_LINE1 -v n2=$FT_LINE2 'NR >= n1 && NR <= n2' | tr '\n' ',' | sed 's:,:, :g' | sed 's/\(.*\), /\1./' | tr -d '\n'

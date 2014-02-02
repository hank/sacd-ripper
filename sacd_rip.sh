#!/bin/bash
PS3="192.168.1.103:2002"
INFO=$(sacd_extract -i $PS3 -P)
CATNUM=$(echo "$INFO" | perl -ne'print $1,"\n" if(/Catalog Number: ([0-9-_a-zA-Z]+)/)'|tail -n1)
TITLE=$(echo "$INFO" | perl -ne'if(/Title: (.*)/){$_=$1;s/\s+/./g;print $_,"\n"}'|head -n1)
ARTIST=$(echo "$INFO" | perl -ne'if(/Artist: (.*)/){$_=$1;s/\s+/./g;print $_,"\n"}'|head -n1)
OUTNAME=$ARTIST.$TITLE.$CATNUM
while true; do
    echo Will produce $OUTNAME.iso
    read -p "Do you wish to rename? " yn
    case $yn in
        [Yy]* ) read -p "New name: " OUTNAME;;
        [Nn]* ) break;;
        * ) echo "Please answer yes or no.";;
    esac
done
while true; do
    read -p "Do you wish to continue? " yn
    case $yn in
        [Yy]* ) sacd_extract -i $PS3 -I $OUTNAME; break;;
        [Nn]* ) exit;;
        * ) echo "Please answer yes or no.";;
    esac
done

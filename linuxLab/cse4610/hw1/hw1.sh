#!/bin/bash
#file: loops.sh
#file: cond.sh


echo "enter backup directory name: "
read DIR

if [ -d $DIR ]
then
	echo "$DIR exist"
else
	mkdir $DIR
	echo "created directory $DIR"
fi


for i in *.cpp
do
	cmp -s $i $DIR/$i

	if [ $? -eq 0 ]
	then
		echo "no update"
	else
		cp $i $DIR/
		echo "backup $i"
	fi
done
